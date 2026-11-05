#include <stdio.h>
int main() {
    FILE *archivo;
    char linea[100];
    archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    //fgets(linea,....) si el resultado de fgets es NULL, significa que llegó al final
    char *esNulo;//tiene una direccion aleatoria//
    while (esNulo != NULL) {
        printf("%s", linea);
        esNulo = fgets(linea, sizeof(linea),archivo);
    }
 fclose(archivo);
 return 0;
}
