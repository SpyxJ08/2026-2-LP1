#include <stdio.h>
int main(void) {
    printf("|%d|\n", 42);
    printf("|%5d|\n", 42); // ancho minimo 5
    printf("|%-5d|\n", 42); // alineado a la izquierda
    printf("|%05d|\n", 42); // relleno con ceros
    printf("|%+d|\n", 42); // muestra el signo
    printf("|%8.3f|\n", 3.14159);// ancho 8, 3 decimales
    printf("|%-10.2f|\n", 2.5);
    printf("|%x|%X|%o|\n", 255, 255, 255); // hex, HEX, octal
    printf("|%e|\n", 1234.5678); // notacion cientifica
    printf("|%c|%s|\n", 'A', "Hola");
 // Longitudes
    long l = 1234567890L;
    printf("%ld\n", l);
    size_t s = sizeof(int);
    printf("%zu\n", s);
// El caracter %% para imprimir un %
    printf("100%%\n");
 return 0;
}
