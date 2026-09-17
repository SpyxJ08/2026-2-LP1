#include <stdio.h>
int main(void) {
 printf("Sin newline...");
 // Sin '\n', stdout puede no vaciarse si esta en modo buffer completo
 fflush(stdout); // fuerza el vaciado
 printf(" continuacion con newline\n");
 // En consola, stdout suele ser line-buffered: se vacia al '\n'
 // Al redirigir a archivo, pasa a full-buffered
 return 0;
}
/*Demostración:
./buffer_salida.exe # Se ve bien en consola
./buffer_salida.exe > out.txt # El primer printf no aparece hasta el final sin ffl
ush*/
