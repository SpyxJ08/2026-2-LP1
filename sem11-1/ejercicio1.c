#include <stdio.h>
#include <string.h>

//Definicion del tipo de dato structura llamado alumno
struct alumno{
    int codigo;
    char nombre[20];
    int edad;
};

int main(){
    //declaracion de la variabla a1 de tipo struct alumno;
    struct alumno a1;
    struct alumno a2[5];
    struct alumno a3={1250,"Abel",18};
    struct alumno a4={.edad=22,.codigo=999}; // no se ha inicializado el atributo nombre

    a1.codigo=123;
    strcpy(a1.nombre,"Jhonny");//asignacion a cadenas
    a1.edad=25;
    printf("Codigo  :%d\n",a1.codigo);
    printf("Nombre  :%s\n",a1.nombre);
    printf("Edad    :%d\n\n",a1.edad);

    printf("Codigo  :%d\n",a3.codigo);
    printf("Nombre  :%s\n",a3.nombre);
    printf("Edad    :%d\n\n",a3.edad);

    printf("Codigo  :%d\n",a4.codigo);
    printf("Nombre  :%s\n",a4.nombre);
    printf("Edad    :%d\n\n",a4.edad);
    

    for(int i=0;i<5;i++){
        a2[i].codigo = 100 + i;
        a2[i].edad = 12 + i;

    }
    for(int i=0;i<5;i++){
        printf("Alumno %d\n",i);
        printf("Codigo  :%d\n",a2[i].codigo);
        printf("Edad    :%d\n\n",a2[i].edad);
    }

    return 0;
}