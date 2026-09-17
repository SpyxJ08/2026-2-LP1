#include <stdio.h>
#include <string.h>
int main(void) {
 char buffer[10];
 // MAL: gets() — NUNCA usar (eliminada en C11)
 // gets(buffer); // ¡Buffer overflow garantizado!
 // BIEN: fgets() limita la lectura
 printf("Escribe algo (max 9 chars): ");
 if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
 fprintf(stderr, "Error de lectura\n");
 return 1;
 }
 // fgets conserva el '\n' si cabe
 size_t len = strlen(buffer);
 if (len > 0 && buffer[len-1] == '\n') {
 buffer[len-1] = '\0';
 }
 printf("Leido: [%s]\n", buffer);
 return 0;
}
