//Instrucciones de preprocesamiento//
#include <stdio.h>
#define anio_actual 2027

#ifndef __linux__
#define __SO__ "Windows"
#else
#define __SO__ "Linux"
#endif


//PROTOTIPOS//
void saludar();
int devolver_anio_actual();

int main(){//funcion principal//
    saludar();//llamada//
    printf("El sistema operativo actual es %s",__SO__);
    return 0;
}

//zona de definiciones de funciones//
int devolver_anio_actual(){
    return anio_actual;
}

//Definicion de la funcion llamada saludar()//
void saludar(){             //Parametro y salida: Ninguno//
    printf("Bienvenidos a SW303 en este anio %d\n",devolver_anio_actual());
}
