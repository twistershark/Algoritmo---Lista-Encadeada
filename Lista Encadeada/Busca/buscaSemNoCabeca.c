#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

celula *busca(celula *le, int x){
    celula *p;
    for(p = le; p != NULL && p->dado != x; p = p->prox); 
    //For é encerrado caso ele ache o elemento ou chegue no final da lista. 
    return p;
}

/*
OBS:
    - Retorna um ponteiro para o nó que contém X ou NULL se X não estiver na lista.
    - Complexidade O(n)
*/
