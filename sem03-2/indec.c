#include <stdio.h>
int main(){
    int i = 5, j;
    j = i++; printf("j = i++ -> i=%d, j=%d\n", i, j); // i=6, j=5
    i = 5;
    j = ++i; printf("j = ++i -> i=%d, j=%d\n", i, j); // i=6, j=6
 // Trampa clasica: comportamiento no especificado
    i = 5;
    int k = i++ + i++; // ¡EVITAR! Orden de evaluacion no definido
    printf("i++ + i++ = %d (comportamiento No especificado)\n",k);
    
    return 0;
    }