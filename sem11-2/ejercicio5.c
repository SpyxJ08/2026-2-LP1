#include <stdio.h>

typedef struct configuracion{
    unsigned int flag : 1; // 0b0 , 1 bit de ancho
    unsigned int nivel : 3; //0b000 , 3 bits de ancho
    unsigned int modo : 2; //0b00 , 2 bits de ancho
    unsigned int prioridad : 4;//ob0000 , 4 bits de ancho
}confi;

//      1100 1000
//bits altos | bits bajos

int main(){
    confi c1;

    c1.flag = 1;

    printf("El flag es %d\n",c1.flag);
    printf("c1 ocupa %d bytes\n",sizeof(confi));


    return 0;
}