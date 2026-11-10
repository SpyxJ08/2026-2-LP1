#include <stdio.h>
#include <stdlib.h>
struct Nodo{
    int valor;
    struct Nodo *next;
};

int main(){
    //definition of list//
    struct Nodo *lista=NULL;
    struct Nodo *head=NULL;
    struct Nodo *aux=NULL;

    //first element//
    lista=malloc(sizeof(struct Nodo));

    if(lista!=NULL){ //Si hay espacio de memoria, poner el 1er elemento 
        lista->valor=10;
        lista->next=NULL;
    }
    else{
        printf("No hay memoria");
        return 0;
    }

    //second element
    head=lista;
    head->next=malloc(sizeof(struct Nodo));
    if(head->next!=NULL){ //Si hay espacio de memoria, poner el 2do elemento 
        head=head->next;//head apunta al next
        head->valor=100;
        head->next=NULL;
    }
    else{
        printf("No hay memoria");
        return 0;
    }

    //third element
    head->next=malloc(sizeof(struct Nodo));
    if(head->next!=NULL){ //Si hay espacio de memoria, poner el 2do elemento 
        head=head->next;//head apunta al next
        head->valor=1000;
        head->next=NULL;
    }
    else{
        printf("No hay memoria");
        return 0;
    }
    //mostrar los valores
    head=lista;//apunta al inicio de la lista
    while(head!=NULL){
        printf("Valor   :%d\n",head->valor);
        head=head->next;
    }
    //Liberar
    head=lista;
    while(head!=NULL);{
        aux=head;
        head=head->next;
        free(aux);
    }

    return 0;
}