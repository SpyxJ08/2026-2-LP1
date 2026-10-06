#include <stdio.h>
int main(){
    int *ptr; //se define ptr como puntero//
                //es una variable que opera con direccion de memoria//
                //inicialmente no apunta a algún lugar de la memoria//
    int cantidad = 200;

    /*Regla: Si se crea el puntero se requiere inicializar antes de usarlo */
    ptr = NULL; //NULL es cero, significa que no se apunta a nada, que no tiene memoria
    //... despues de muchas lineas 
    if(ptr==NULL){
        ptr=&cantidad;
        printf("Puntero inicializado, su direccion es %p y su valor es %d",ptr,*ptr);
    }else{
        printf("El puntero ya tiene memoria , no es necesario inicializar!\n");

    }
}