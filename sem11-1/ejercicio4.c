#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Definicion del tipo de dato structura llamado alumno
struct alumno{
    int codigo;
    char nombre[20];
    int edad;
};

void mostrar(struct alumno a){
    printf("Codigo  :%d\n",a.codigo);
    printf("Nombre  :%s\n",a.nombre);
    printf("Edad    :%d\n\n",a.edad);

};

int main(){
    struct alumno *ptr;
    ptr=NULL; //poner a nulo el puntero

    //...mucho despues reservar memoria//
    ptr=(struct alumno*)malloc(sizeof(struct alumno)); //malloc devuelve un puntero tipo void, por eso se tiene que castear//
    //recordar que malloc devuelve una direccion, por ello ptr es puntero//
    //para usarlo verificar si hay memoria//
    if(ptr==NULL){
        printf("No hay memoria!!!");
        return 1; //salir
    }
    //si hay memoria, entonces llenar la memoria//
    ptr->codigo=9999;
    strcpy(ptr->nombre,"Abel");
    ptr->edad=22;

    mostrar(*ptr);
    //liberar la memoria//
    free(ptr);
    ptr=NULL;

    return 0;
}