#include <stdio.h>
#include "racional.h"

int main(void) {
    int n1, d1, n2,d2,n_res,d_res;

    printf("Ingrese la fraccion 1, primero el numerador , despues denominador: ");
    scanf("%d %d", &n1, &d1);
    printf("Ingrese la fraccion 2, primero numerador, despues denominador : ");
    scanf("%d %d", &n2, &d2);
    sumar(n1, d1, n2, d2, &n_res, &d_res);
    printf("El resultado simplificado: %d/%d\n", n_res, d_res);

    return 0;
}