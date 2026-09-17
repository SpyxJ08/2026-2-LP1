#include <stdio.h>

int main(void) {
    char linea[256];
    int vocales = 0;
    int consonantes = 0;
    int digitos = 0;
    int espacios = 0;
    int otros = 0;

    printf("Ingresa una linea de texto:\n");
    fgets(linea, 256, stdin);

    int i = 0;
    while (linea[i] != '\0') {
        char c = linea[i];
        switch (c) {
            case '\n':
            case '\r':
                break;
            case ' ':
            case '\t':
                espacios++;
                break;
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vocales++;
                break;
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                digitos++;
                break;

            default:
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                    consonantes++;
                } else {
                    otros++;
                }
                break;
        }

        i++;
    }
    printf("\n    REPORTE DE LA LINEA     \n");
    printf("%-18s: %4d\n", "Vocales", vocales);
    printf("%-18s: %4d\n", "Consonantes", consonantes);
    printf("%-18s: %4d\n", "Digitos", digitos);
    printf("%-18s: %4d\n", "Espacios", espacios);
    printf("%-18s: %4d\n", "Otros", otros);
    printf("%-18s: %4d\n", "Total", vocales + consonantes + digitos + espacios + otros);

    return 0;
}