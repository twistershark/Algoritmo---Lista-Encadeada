#include <stdio.h>

/*É uma estrutura linear composta de nós. Esses nós podem não ocupar posições sequênciais na memória,
assim sendo, cada nó deve saber onde está o próximo elemento.*/

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;
 
 /*
Duas formas de indicar onde a lista começa:
 
 1) Um ponteiro para o primeiro elemento: le -> |2||-> |3||-> |1||-> NULL 
 celula no1;
 celula *le = &no1

 2)Usar um sentinela para marcar o início da lista, também conhecido por nó cabeça.

 |//||-> |2||-> |3||-> |1||-> NULL
 */






