/*** FUNÇÕES PARA MANIPULAÇÃO DE PILHAS ***/

#include "pilhaHeader.h"

struct node {
	int info;
	struct node *prox;
}; 

/* Cria uma pilha pilhaVazia */
Pilha *pilhaCria()
{
	Pilha *top = NULL;
	return top;
}

/* Verifica se a pilha está Vazia ou não */
int pilhaVazia(Pilha *top)
{
	if (top == NULL)
		return 1;
	else
		return 0;
}

/* Insere elementos no top da pilha */
Pilha *pilhaPush(Pilha *top)
{
	int info;
	Pilha *temp;
	temp = (Pilha *)malloc(sizeof(Pilha));

	printf("\nDigite o valor para inserir na pilha:\n");
	scanf("%d", &info);
	temp -> info = info;
	temp -> prox = top;
	top = temp;

	return top;
}

/* Deleta elemento do topo */
Pilha *PilhaPop(Pilha *top)
{
	Pilha *temp;

	if (pilhaVazia(top)) {
		printf("\n* A pilha está pilhaVazia *.\n");
	} else {
		temp = top;
		top = top -> prox;
		free(temp);
	}
	
	return top;
}

/* Mostra o elemento no topo da pilha */
void pilhaPeek(Pilha *top)
{
	if (pilhaVazia(top))
		printf("\nImpossível realizar, lista pilhaVazia.\n");
	else
		printf("\nO elemento no topo da pilha: %d\n", top -> info);
}

// Libera a pilha.
void pilhaLibera(Pilha *top)
{
	Pilha *temp;
	int true = 1;

	while (true) {
		
		temp = top;

		if (temp == NULL)
			break;

		top = top -> prox;
		free(temp);
	}

	printf("\n\nConcluido.\n");
}





