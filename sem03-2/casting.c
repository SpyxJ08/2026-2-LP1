#include <stdio.h>
int main(void) {
 // Promocion aritmetica: int -> double cuando se mezcla
    int i = 3;
    double d = i / 2.0; // i se promueve a double
    printf("i / 2.0 = %.2f\n", d);
 // Truncamiento al asignar double -> int
    double pi = 3.14159;
    int entero = pi; // pierde la parte decimal
    printf("pi -> int: %d\n", entero);
 // Casting explicito
    printf("(int)3.99 = %d\n", (int)3.99);
    printf("(double)3/2 = %.2f\n", (double)3 / 2);
 // CUIDADO con unsigned
    unsigned int u = 1;
    int neg = -1;
    if (neg > u) { // -1 se convierte a unsigned grande!
        printf("Inesperado\n");
    } else {
        printf("neg > u es falso (conversion implicita a unsigned)\n");
    }
 return 0;
}