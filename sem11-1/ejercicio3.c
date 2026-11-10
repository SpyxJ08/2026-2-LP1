#include <stdio.h>
#include <string.h>

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

}

int main(){
    struct alumno a1={999,"Abel",18};
    struct alumno *ptr;

    ptr=&a1;//se crea un apuntador al tipo alumno//
    mostrar(*ptr);

    //modificar los datos
    (*ptr).edad=33;
    mostrar(*ptr);

    return 0;
}