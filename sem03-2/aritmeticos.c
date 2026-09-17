#include <stdio.h>
int main(){
    int a=7,b=2;
    printf("7/2 =%d (division entera)\n",a,b);
    printf("7%%2 =%d (modulo)\n",a%b);
    printf("7 / 2.0 = %.2f(promocion a double)\n",a/2.0);
    printf("(float)7/2 = %.2f\n", (float)a / b);

    printf("-7 %% 2=%d\n",-7%2);
    printf(" 7 %% -2 = %d\n", 7 % -2);
     
    int x=10;
    x += 5; printf("x += 5 -> %d\n", x);
    x -= 3; printf("x -= 3 -> %d\n", x);
    x *= 2; printf("x *= 2 -> %d\n", x);
    x /= 4; printf("x /= 4 -> %d\n", x);
    x %= 4; printf("x %%= 4 -> %d\n", x);

    //¿Por qué 7/2 da 3 y no 3.5? porque estas ingresando 2 enteros y el programa piensa que tu resultado debe ser entero//
    //Comparalo con Python 3: En python toda division da un float //
    /*¿Cuál es el signo de -7 % 2 en C? Es negativo
    ¿Es igual en Python? No, python trunca hacia el infinito negativo, es decir, como una division por exceso.
    ¿Que ocurre con x/=4 cuando x es int? se autodivide y se asigna ese valor*/


    return 0;
}