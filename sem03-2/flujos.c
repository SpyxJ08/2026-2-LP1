#include <stdio.h>
int main(){
    fprintf(stdout, "Mensaje normal por stdout\n");
    fprintf(stderr, "Mensaje de error por stderr\n");
 // Redirigir desde la terminal:
 // prog.exe > salida.txt 2> error.txt , el primer mensaje ira al primer .txt y el siguiente al siguiente.
    return 0;
}
/*
./flujos.exe > out.txt 2> err.txt
type out.txt
type err.txt
*/
//type sirve para pegar y verlo en otro archivo//