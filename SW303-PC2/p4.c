#include <stdio.h>
int total_llamadas = 0; 
int ackermann(int m, int n) {
    static int llamadas = 0; 
    llamadas++;
    total_llamadas=llamadas;
    if (m==0){
        return n + 1;
    }
    if (m>0&&n==0) {
        return ackermann(m-1,1);
    }
    if (m>0 && n>0) {
        return ackermann(m-1, ackermann(m, n-1));
    }
    return 0;
}

int main(void) {
    int resultado=ackermann(3,4);
    printf("Resultado: %d\n", resultado);
    printf("Total de llamadas recursivas: %d\n", total_llamadas);
    return 0;
}