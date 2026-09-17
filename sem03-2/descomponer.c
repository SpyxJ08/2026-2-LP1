#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero entero: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Entrada no valida.\n");
        return 1;
    }

    printf("\n--- Digitos (de derecha a izquierda) ---\n");
    if (n == 0) {
        printf("0\n");
    } else {
        int temp = (n < 0) ? -n : n; // Manejo de negativos
        while (temp > 0) {
            printf("%d ", temp % 10);
            temp /= 10;
        }
        printf("\n");
    }
    return 0;
}