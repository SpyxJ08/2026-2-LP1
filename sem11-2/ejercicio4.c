#include <stdio.h>
//definir un tipo de dato
//en este caso, crear el tipo precio
typedef float precio;
typedef char *nombre_ptr; // como buena practica utiliza _ptr, para especificar
typedef char mensaje[50];

struct Alumno_{
    int codigo;
    char nombres[50];
};

typedef struct Alumno_ alumno;

typedef struct obrero{
    int codigo;
    int antiguedad;
    char nombres[50];
}Obrero;


int main(){
    precio precio_venta, precio_compra;
    nombre_ptr n1; //n1 es un puntero
    mensaje m1;
    alumno a1;
    Obrero o1;


    precio_venta=25.5;
    printf("Precio de venta es %.2f\n",precio_venta);

    return 0;
}