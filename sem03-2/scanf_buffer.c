#include <stdio.h>
int main(){
    int edad;
    char inicial;
    char nombre[50];
    printf("Edad: ");
    scanf("%d",&edad);
    printf("Inicial: ");
    scanf(" %c", &inicial); // el espacio inicial consume el '\n' del buffer
    printf("Nombre: ");
    scanf("%49s", nombre); // sin & (arreglo decae a puntero), limite de ancho
    printf("-> %d, %c, %s\n", edad, inicial, nombre);
 // DEMOSTRACION DE PROBLEMA: scanf con %s deja el '\n' en el buffer
    int n;
    char cadena[50];
    printf("Numero: ");
    scanf("%d", &n);
    printf("Cadena: ");
    scanf("%s", cadena); // se salta el '\n' porque %s lo ignora
    printf("n=%d, cadena=%s\n", n, cadena);
 return 0;
}