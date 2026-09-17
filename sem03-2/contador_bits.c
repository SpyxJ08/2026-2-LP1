#include <stdio.h>

unsigned int contar_unos(unsigned int n) {
    unsigned int cuenta = 0;
    while (n != 0) {
        n &= (n - 1);
        cuenta++;
    }
    return cuenta;
}

int main(void) {
    unsigned int num = 13; // Binario: 00001101
    printf("Bits en 1 de %u: %u\n", num, contar_unos(num));
    return 0;
}
/*El algoritmo de Brian Kernighan cuenta la cantidad de bits en 1 ejecutando el bucle únicamente tantas veces como bits en 1 tenga el número*/
/*Restar 1 a un número binario invierte todos los bits desde la derecha hasta encontrar el primer bit 1 (el bit menos significativo encendido),
 convirtiéndolo en 0. Al aplicar una operación binaria AND (&) entre n y n - 1, ese bit 1 menos significativo se apaga sin alterar los bits a su izquierda.*/

 /*Preguntas:
1. ¿Por qué n & (n-1) elimina el 1 menos significativo?
Cualquier entero no nulo n puede representarse en binario dividiéndolo en tres partes: un prefijo cualquiera, su bit 1 menos significativo (el primer 1 desde la derecha), y una cola de ceros a su derecha:
bits de n: [prefijo] 1 00...0
Al restar 1 (n - 1), el acarreo inverso modifica el valor desde ese bit 1 hasta el final:
El bit 1 se convierte en 0.
Todos los ceros a su derecha se convierten en 1.
El prefijo a la izquierda no cambia.
bits de (n - 1): [prefijo] 0 11...1
Al aplicar la operación AND (&) bit a bit entre ambos:
El prefijo se mantiene igual (bit & bit = bit).
La posición del bit 1 original da 1 & 0 = 0 (se apaga).
La cola de ceros y unos da 0 & 1 = 0 (permanece apagada).
El resultado final conserva todos los bits intactos excepto ese 1 en particular, que pasa a valer 0.

2. ¿Qué pasa con >> sobre un int negativo? (desplazamiento aritmético vs. lógico — depende de la
implementación).
En los estándares de C y C++, el desplazamiento a la derecha (>>) sobre un entero con signo negativo está clasificado como comportamiento dependiente de la implementación (implementation-defined):
Desplazamiento aritmético: Es el comportamiento estándar en casi todos los compiladores actuales (GCC, Clang, MSVC). Rellena los espacios vacíos de la izquierda con copias del bit de signo (1). Esto mantiene el signo negativo y equivale a una división entera por potencias de 2 (por ejemplo, -8 >> 1 resulta en -4).
Desplazamiento lógico: Rellena los bits vacíos de la izquierda con 0, descartando el signo y transformando el número negativo en un número positivo muy grande.
Para evitar ambigüedades y garantizar portabilidad al manipular bits, la regla recomendada es utilizar siempre tipos sin signo (unsigned int, uint32_t), en los cuales el desplazamiento lógico siempre está garantizado por el estándar.

3. ¿Cómo verificarías que un número es potencia de 2 en una sola expresión? → n && !(n & (n1)).
La expresión n && !(n & (n - 1)) se basa en dos comprobaciones:
n (comprobación de distinto de cero): El número 0 no es una potencia de dos. Sin esta guarda inicial, 0 & (0 - 1) daría 0, y !(0) devolvería erróneamente 1 (verdadero).
!(n & (n - 1)) (comprobación de un único bit encendido): En binario, cualquier potencia de dos (1, 2, 4, 8, 16, etc.) tiene un único bit 1. Al aplicar n & (n - 1) se borra ese único bit, dejando el valor en 0. Al aplicar la negación lógica !, el 0 se transforma en 1 (verdadero).
Si el número tiene dos o más bits en 1, n & (n - 1) no será 0, por lo que la negación lógica resultará en 0 (falso).
*/