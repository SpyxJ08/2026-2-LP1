#include <stdio.h>
int main(void) {
    int c; 
    int contador = 0;
    printf("Escribe texto (Ctrl+Z + Enter para terminar en Windows):\n");
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A'; // convertir a mayuscula
        }
        putchar(c);
        contador++;
    }
    printf("\nTotal caracteres leidos: %d\n", contador);
    return 0;
}
/*Preguntas:
1. ¿Por qué c debe ser int y no char?
getchar() necesita devolver dos tipos de información distintos:
Cualquier byte/carácter válido leído (rango 0 a 255, o unsigned char).
Un valor centinela especial para indicar el fin de archivo o error: EOF (que la macro define comúnmente como -1).
Un tipo char en C solo tiene 8 bits de tamaño (1 byte). Si c fuera char:
Si char es con signo (signed char): Un carácter legítimo con código binario 255 (como 0xFF, que en la tabla extendida/ISO-8859 representa ÿ) se interpretaría como -1. El programa lo confundiría con EOF y cortaría la lectura prematuramente antes de terminar el archivo.
Si char es sin signo (unsigned char): c solo podría almacenar valores entre 0 y 255. Al recibir EOF (-1), este se convertiría en 255 y la comparación c != EOF nunca sería falsa, provocando un bucle infinito.
Al usar int (típicamente 32 bits), la variable tiene suficiente rango para representar simultáneamente todos los posibles valores de un unsigned char (0 a 255) y además el valor negativo -1 de EOF sin colisiones.

2. ¿Cuántos caracteres cuenta un salto de línea? ¿Y el \r\n de Windows?
Depende del modo en que se lea la entrada (texto vs. binario):
En modo texto estándar (stdin, como en este programa):
La biblioteca estándar de C en Windows realiza una traducción automática en los flujos de texto: la secuencia física de dos bytes \r\n (CRLF) del teclado o archivo se convierte internamente en un único carácter \n (LF, valor ASCII 10).
Por lo tanto, cada salto de línea cuenta como 1 solo carácter.
En modo binario (o leyendo los bytes crudos del disco sin traducción):
El salto de línea de Windows está compuesto físicamente por dos bytes: retorno de carro (\r, ASCII 13) y salto de línea (\n, ASCII 10).
En ese caso, se leerían y contarían 2 caracteres (\r y \n).*/