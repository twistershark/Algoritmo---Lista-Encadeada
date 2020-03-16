#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

//Impressão da lista encadeada:

// 2) com nó cabeça

void imprimeComNoCabeca(celula *le){
    celula *p = le->prox;
    while(p != NULL){
        printf("%d", p->dado);
        p = p->prox;
    }
} //Complexidade O(n)