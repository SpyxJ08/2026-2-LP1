#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *izq, *der;
} Nodo;

// Inserta un valor y retorna la raíz del subárbol actualizado
Nodo* insertar(Nodo *p, int valor) {
    if (p == NULL) {
        Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
        nuevo->valor = valor;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        return nuevo;
    }
    if (valor < p->valor) {
        p->izq = insertar(p->izq, valor);
    } else {
        p->der = insertar(p->der, valor);
    }
    return p;
}

// Busca un valor en el árbol: retorna 1 si existe, 0 si no
int buscar(Nodo *p, int valor) {
    if (p == NULL) {
        return 0;
    } else if (valor == p->valor) {
        return 1;
    } else if (valor < p->valor) {
        return buscar(p->izq, valor);
    } else {
        return buscar(p->der, valor);
    }
}

// Imprime los elementos en orden ascendente (inorden)
void imprimir_arbol(Nodo *p) {
    if (p != NULL) {
        imprimir_arbol(p->izq);
        printf("valor : %d\n", p->valor);
        imprimir_arbol(p->der);
    }
}

int main() {
    Nodo *arbol = NULL;

    // Insertar valores
    arbol = insertar(arbol, 10);
    arbol = insertar(arbol, 12);
    arbol = insertar(arbol, 7);

    // Imprime: 7, 10, 12
    imprimir_arbol(arbol);

    // Buscar el 10
    if (buscar(arbol, 10)) {
        printf("valor 10 encontrado\n");
    } else {
        printf("no se pudo encontrar el valor 10\n");
    }

    // Buscar el 5
    if (buscar(arbol, 5)) {
        printf("valor 5 encontrado\n");
    } else {
        printf("no se pudo encontrar el valor 5\n");
    }

    return 0;
}