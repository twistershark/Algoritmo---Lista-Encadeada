#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

//Impressão da lista encadeada:

// 1) Sem nó cabeça:

void imprime(celula *le){
    for(celula *p = le; p != NULL; p = p-> prox)
        printf("%d", p->dado);
} //Complexidade O(n)