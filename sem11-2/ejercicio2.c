#include <stdio.h>

enum Mes{   //los enum por defecto comienzan en 0,pero se puede comenzar en otro valor, marcandolo
    ENERO = 1, //perzonalizando el inicio
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SETIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE,
};

int main(){

    int mes=3;
    switch(mes){
        case ENERO: printf("Enero\n");break;
        case FEBRERO: printf("Febrero\n");break;
        case MARZO: printf("Marzo\n");break;
        case ABRIL: printf("Mayo\n");break;
        case MAYO: printf("Abril\n");break;
        case JUNIO: printf("Junio\n");break;
        case JULIO: printf("Julio\n");break;
        case AGOSTO: printf("Agosto\n");break;
        case SETIEMBRE: printf("Setiembre\n");break;
        case OCTUBRE: printf("Octubre\n");break;
        case NOVIEMBRE: printf("Noviembre\n");break;
        case DICIEMBRE: printf("Diciembre\n");break;
    }

    return 0;
}