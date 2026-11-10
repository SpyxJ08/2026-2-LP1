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
    //declaracion de la variabla a1 de tipo struct alumno;
    struct alumno a1;
    struct alumno a2[5];
    struct alumno a3={1250,"Abel",18};
    struct alumno a4={.edad=22,.codigo=999}; // no se ha inicializado el atributo nombre y es una inicializacion llamada parcial

    a1.codigo=123;
    strcpy(a1.nombre,"Jhonny");//asignacion a cadenas
    a1.edad=25;


    mostrar(a1);
    mostrar(a3);
    mostrar(a4);

    

    for(int i=0;i<5;i++){
        a2[i].codigo = 100 + i;
        a2[i].edad = 12 + i;

    }
    printf("Mostrar el arreglo\n");
    for(int i=0;i<5;i++){
        mostrar(a2[i]);
    }

    return 0;
}