/*** FUNÇÕES PARA MANIPULAÇÃO DE LISTAS ***/

#include "listaHeader.h"

struct lista
{
    int info;
    struct lista* prox;
};

/* função de criação: retorna uma lista vazia */
Lista* listaCria(void)
{
    return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* listaInsereInicio(Lista* l, int i)					// <<<<<<<<<< Unificar funções de inserção no inicio e meio, apenas uma funções responsável por inserção em qualquer lugar da lista.
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

/* função imprime: imprime valores dos elementos */
void listaImprime(Lista* l)
{
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int listaVazia(Lista* l)
{
    return (l == NULL);
}

/* função busca: busca um elemento na lista */
Lista* listaBusca(Lista* l, int v)
{
    Lista* p;
    for (p=l; p!=NULL; p = p->prox)
    {
        if (p->info == v)
            return p;
    }
    /* não achou o elemento */
    return NULL;
}

/* função retira: retira elemento da lista */
Lista* listaRetira(Lista* l, int v)									// <<<<<<<<<<< Unificar funções de remoção no inicio e meio, apenas uma funções responsável por remoção em qualquer lugar da lista.
{
// ponteiro para elemento anterior
    Lista* ant = NULL;
    Lista* p = l;
    /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
        /* não achou: retorna lista original*/
        return l;
        /* retira elemento */
        if (ant == NULL)
        {
            /* retira elemento do inicio */
            l = p->prox;
        }
        else   /* retira elemento do meio da lista */
        {
            ant->prox = p->prox;
        }
    free(p);
    return l;
}

void listaLibera(Lista* l)
{
    Lista* p = l;
    while (p != NULL)
    {
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}

/**** Implementações Stefany Lacroux ****/

int listaLength (Lista *l)
{
	int tam = 0;
	Lista *temp = l;
	
	if (l == NULL)
		tam = 0;
	else if (l->prox == NULL)
		tam = 1;
	else
	{
		while (temp != NULL)
		{
			tam ++;
			temp = temp->prox;
		}
	}
	
	return tam;
}

Lista* listaInseremeio (Lista* l, int num)					// <<<<<<<<<<<<
{
	int i, meio, tam;
	tam = listaLength (l); // Dá o tamanho da lista
	Lista *temp, *aux;
	Lista *novo = (Lista*) malloc (sizeof(Lista));
	novo->info = num;
	
	if (tam != 0)
	{
		meio = tam/2;

		if (tam%2 != 0)
			meio = tam/2 + 1;
		
		temp = l;
		
		for (i = 0 ; i < meio ; i++)
		{
			aux = temp;
			temp = temp->prox;
		}
		
		aux->prox = novo;
		novo->prox = temp;

	}
	else
	{	
		l = novo;
		novo->prox = NULL;
	}
	
	return l;
}

Lista* listaRetiraMeio (Lista* l)								// <<<<<<<<<
{
	int i, meio, tam;
	tam = listaLength (l); // Dá o tamanho da lista
	Lista *temp, *aux;
	
	temp = l;
	
	if (tam != 0)
	{
		meio = tam/2;

		/*if (tam%2 != 0)
			meio = tam/2 + 1;	
		*/
		for (i = 0 ; i < meio ; i++)
		{
			aux = temp;
			temp = temp->prox;
		}
		
		aux->prox = temp->prox;
		free (temp);

	}
	else
	{	
		free(temp);
	}
	
	return l;
}


