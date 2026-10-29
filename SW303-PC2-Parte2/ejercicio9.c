#include <stdio.h>
#include <stdlib.h>

char *agregar_caracter(char *linea, size_t *capacidad, size_t *longitud, char c){
    if (capacidad == NULL || longitud == NULL){
        return NULL;
    }
    if (*longitud+1 >= *capacidad){
        size_t nueva_capacidad;
        if(*capacidad==0){
            nueva_capacidad=8;
        }else{
            nueva_capacidad= (*capacidad*2);
        }
        char *aux=(char *)realloc(linea, nueva_capacidad * sizeof(char));
        if (aux==NULL){
            return NULL;
        }
        linea=aux;
        *capacidad = nueva_capacidad;
    }
    linea[*longitud]=c;
    (*longitud)++;
    linea[*longitud]='\0';
    return linea;
}

int main(void){
    char *linea = NULL;
    size_t capacidad = 0;
    size_t longitud= 0;
    int c;
    printf("Escriba algo (Enter para terminar):\n");
    while ((c = getchar())!='\n' && c != EOF){
        size_t cap_anterior = capacidad;
        char *nuevo_buffer = agregar_caracter(linea, &capacidad, &longitud, (char)c);

        if (nuevo_buffer==NULL){
            printf("Error: fallo la asignacion de memoria.\n");
            free(linea);
            return EXIT_FAILURE;
        }
        linea = nuevo_buffer;
    }
    if (linea==NULL){
        linea=(char *)malloc(1 * sizeof(char));
        if (linea!=NULL) {
            linea[0] = '\0';
            capacidad = 1;
        }
    }
    printf("Longitud: %zu\n",longitud);
    if (linea != NULL){
        printf("Linea:\"%s\"\n",linea);
    }
    free(linea);
    linea=NULL;
    return EXIT_SUCCESS;
}