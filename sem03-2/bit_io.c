#include <stdio.h>

int main(void) {
    unsigned int n;
    printf("Numero: ");
    if (scanf("%u", &n) != 1) {
        return 1;
    }
    // Se divide en 8 bloques (nibbles) de 4 bits para evitar if de espaciado
    printf("Binario : ");
    unsigned int copia_bits = n;
    for (int bloque = 0; bloque < 8; bloque++) {
        for (int bit = 0; bit < 4; bit++) {
            // Revisa el bit superior (bit 31)
            if (copia_bits & 0x80000000U) {
                putchar('1');
            } else {
                putchar('0');
            }
            copia_bits <<= 1; // Desplaza a la izquierda para el siguiente bit
        }
        if (bloque < 7) {
            putchar(' '); // Espacio entre grupos de 4 bits
        }
    }
    putchar('\n');
//truco//
    unsigned int t = n;
    int unos = 0;
    while (t > 0) {
        t &= (t - 1);
        unos++;
    }

    printf("%-8s: 0x%08X\n", "Hex", n);
    printf("%-8s: 0%011o\n", "Octal", n);
    printf("%-8s: %d\n", "Unos", unos);

    return 0;
}
//recomendacion del labo: compilar con gcc -Wall -Wextra -Wpedantic -std=c11 -O2 bit_io.c -o bit_io.exe//