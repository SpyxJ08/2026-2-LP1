#include <stdio.h>
//las estructuras utilizan 1 byte adicional por cada atributo, para marcar el fin de cada atributo en memoria
/*
struct Dato{
    int entero; //4 bytes + 1 de finalizacion
    float decimal;  //4 bytes + 1 de finalizacion 
    char caracter; // 1 byte + 1 de finalizacion
};*/

//aqui se comparte el espacio de memoria entre los 3 atributos
//toma la dimension de memoria del atributo que tiene mayor tamaño de memoria
union Dato{
    int entero; //solo se puede utilizar uno a la vez, ya que sobreescribe la memoria en cada inicializacion
    float decimal;
    char caracter;
};

int main(){

    union Dato u1;
    union Dato *x;
    x=&u1;

    printf("El tipo entero ocupa %d bytes\n",sizeof(int));
    printf("El tipo float ocupa %d bytes\n",sizeof(float));
    printf("El tipo char ocupa %d bytes\n",sizeof(char));
    printf("Un tipo de dato del tipo union ocupa %d bytes\n",sizeof(union Dato));

    //INICIALIZACION    
    u1.entero=120;
    printf("Entero : %d\n",u1.entero);
    u1.decimal=3.1416;
    printf("Decimal : %f\n",u1.decimal);
    printf("Entero : %d\n",u1.entero);
    printf("(desde el puntero) Decimal: %f\n",x->decimal);

    return 0;
}