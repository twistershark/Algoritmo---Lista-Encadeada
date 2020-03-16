#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void insere(celula *p, int x){
    celula *novo = malloc(sizeof(celula));
    if(novo == NULL)
        exit(EXIT_FAILURE);
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
    
}