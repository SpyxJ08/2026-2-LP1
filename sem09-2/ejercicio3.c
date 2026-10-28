#include <stdio.h>
int main(void) {
    //long long ocupta 8bytes//
    long long numeros[5] = {10, 20, 30, 40, 50};
    long long *ptr;
    for (ptr = numeros; ptr < numeros + 5; ptr++) {
        printf("Valor %lld, direccion %p\n",*ptr,ptr);
    }
    return 0;
}
