#ifndef PILHA2_HEADER_H
#define PILHA2_HEADER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node Pilha;

/* Protótipos */

/* função de criação: retorna uma pilha vazia */
Pilha *pilhaCria();

/* Retorna se a pilha está vazia ou não */
int pilhaVazia(Pilha *top);

/* Libera memória alocada para a Pilha */
void pilhaLibera(Pilha *top);

/* Insere na pilha: início */
Pilha *pilhaPush(Pilha *top);

/* Retira da pilha: Last in, First Out */
Pilha *pilhaPop(Pilha *top);

/* Mostra o elemento no topo da pilha */
void pilhaPeek(Pilha *top);

#endif
