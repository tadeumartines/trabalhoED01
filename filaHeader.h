#ifndef FILA_HEADER_H
#define FILA_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node filaNode;
typedef struct fila Fila;

/* Protótipos */

/* função de criação: retorna uma fila vazia */
Fila *FilaCria();

/* Retorna se a fila está vazia ou não */
bool filaVazia(Fila *q);

/* Remove a Fila */
void filaDeleta(Fila *q);

/* Insere na Fila */
void filaInsere(Fila *q, int info);

/* Remove elemento da Fila */
void filaRemove(Fila *q);

/* Imprime conteúdo da fila */
void filaImprime(Fila *q);

#endif


