#ifndef LISTA_HEADER_H
#define LISTA_HEADER_H
 
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

/* Protótipos */

/* função de criação: retorna uma lista vazia */
Lista* listaCria(void);

/* inserção no início: retorna a lista atualizada */				// <<<<<<<<<< Unificar funções de inserção no inicio e meio, apenas uma funções responsável por inserção em qualquer lugar da lista.
Lista* listaInsereInicio(Lista* l, int i);

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int listaVazia(Lista* l);

/* função busca: busca um elemento na lista */
Lista* listaBusca(Lista* l, int v);

/* função retira: retira elemento da lista */						// <<<<<<<<<<< Unificar funções de remoção no inicio e meio, apenas uma funções responsável por remoção em qualquer lugar da lista.
Lista* listaRetira(Lista* l, int v);

void listaLibera(Lista* l);

/**** Implementações por: Stefany Lacroux ****/
int listaLength (Lista *l);

Lista* listaInsereMeio(Lista* l, int num);								// <<<<<<<<<<<

/* função imprime: imprime valores dos elementos */
void listaImprime(Lista* l);

/* função que remove do meio da lista */							// <<<<<<<<<<<
Lista* listaRetiraMeio (Lista* l);

#endif