#include <stdio.h>
#define filas 5
#define columnas 5
int main(){
    //definir un arreglo bidimensional//
    double matriz [filas][columnas];

    //inicializar sus elemenos con cero)
    for(size_t f=0;f<filas;f++){
        for(size_t c=0;c<columnas;c++){
            matriz[f][c]=0.0;
        }
    }

    //mostrar la matriz//
    for(size_t i=0;i<filas;i++){
        for(size_t j=0;j<columnas;j++){
            printf("%lf\t",matriz[i][j]);//el elemento en memoria es f*(filas -1) + columnas
        }
        printf("\n");//cambio de linea//
    }





    return 0;
}