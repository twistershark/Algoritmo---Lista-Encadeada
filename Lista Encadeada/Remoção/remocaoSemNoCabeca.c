#include <stdio.h>
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void busca_remove(celula *le, int x){
    celula *p;

    if(le != NULL){
        if(le->dado == x){
            p = le;
            le = le->prox;
            free(p);
        } 
        else{
            for(p = le; p->prox != NULL && p->prox->dado != x; p = p->prox);

            if(p->prox != NULL){
                celula *tmp = p->prox;
                p->prox = temp->prox;
                free(tmp);
            }

        }
    }
}