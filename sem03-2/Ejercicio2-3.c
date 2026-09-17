#include <stdio.h>
int main(){
    int anio = 2024;
    int bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
    printf("%d es bisiesto: %d\n", anio, bisiesto);
    return 0;
}
//¿Por qué 5<x<10 no funciona como en matematicas?.¿Que evalua realmente?//
/*Porque el operador < solo admite dos argumentos para utilizar la asociatividad de izquierda a derecha
  Primera comparara 5<x , nos dara 0 o 1 y eso lo compara con <10, vemos que cualquier opcion siempre es menor a 10.
  Por lo que el resultado de toda la operacion siempre es 1*/