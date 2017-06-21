/*** FUNÇÕES PARA MANIPULAÇÃO DE FILAS ***/

#include "filaHeader.h"

 struct node {
	int info;
	struct node *proximo;
};

struct fila {
	filaNode *ini;
	filaNode *fim;
};

/* Cria uma fila filaVazia */
Fila *filaCria()
{
	Fila *q = malloc(sizeof(*q));
	q -> ini = NULL;
	q -> fim = NULL;
	return q;
}

/* Verifica se a fila está Vazia */
bool filaVazia(Fila *q){
	return (q->ini == NULL);
}

/* Libera uma fila */
void filaLibera(Fila *q){

	filaNode *aux, *prox;

	if(!filaVazia(q)){
		prox = q->ini;
		while (prox != NULL){
			aux = prox;
			prox = prox->proximo;
			free(aux);
		}
	}
	
	printf("\nFila deletada.");
}

/* Imprime fila */
void filaImprime(Fila *q) 
{
	filaNode *prox;
	
	if(!filaVazia(q)){
		prox = q->ini;			
		while (prox != NULL){
			printf("%d ", prox -> info); 
			prox = prox->proximo;
		}
	}

	printf("\n");
}

/* Insere um elemento na fila */
void insereFila (Fila *q, int info)
{
	filaNode *p;
	p = malloc(sizeof(filaNode));
	p->info = info;
	p->proximo = NULL;

	if (filaVazia(q))
		q->ini = p;
	else
		q->fim->proximo = p;

	q->fim = p;
}

/* Remove elemento de uma fila */
void removeFila(Fila *q)
{
	filaNode *p;
	
	if (filaVazia(q)) {
		printf("Fila filaVazia!");
		return;
	}

	p = q->ini;
	q->ini = p->proximo;

	if (q->ini == NULL)
		q->fim = NULL;

	free(p);
}
