#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    printf("Cantidad de elementos: ");
    if (scanf("%d", &n) != 1 || n <= 0) { //para detectar el rror en la lectura del valora, ademas n debe ser mayor a 0//
        printf("Cantidad invalida.\n");
        return 1;
    }
    int *ptr = malloc((size_t)n * sizeof *ptr);//se reserva memoria para n int//
    if (ptr == NULL) {//si no hay espacio de memoria, malloc retorna NULL//
        printf("No se pudo reservar memoria.\n");
        return 1;
    }
    //SI HAY ESPACIO, se llena con numeros (i+1)*10//
    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
    }
    printf("Elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    free(ptr);
    ptr = NULL;
    return 0;
}