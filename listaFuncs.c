/*** FUN��ES PARA MANIPULA��O DE LISTAS ***/

#include "listaHeader.h"

struct lista
{
    int info;
    struct lista* prox;
};

/* fun��o de cria��o: retorna uma lista vazia */
Lista* listaCria(void)
{
    return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* listaInsereInicio(Lista* l, int i)					// <<<<<<<<<< Unificar fun��es de inser��o no inicio e meio, apenas uma fun��es respons�vel por inser��o em qualquer lugar da lista.
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

/* fun��o imprime: imprime valores dos elementos */
void listaImprime(Lista* l)
{
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int listaVazia(Lista* l)
{
    return (l == NULL);
}

/* fun��o busca: busca um elemento na lista */
Lista* listaBusca(Lista* l, int v)
{
    Lista* p;
    for (p=l; p!=NULL; p = p->prox)
    {
        if (p->info == v)
            return p;
    }
    /* n�o achou o elemento */
    return NULL;
}

/* fun��o retira: retira elemento da lista */
Lista* listaRetira(Lista* l, int v)									// <<<<<<<<<<< Unificar fun��es de remo��o no inicio e meio, apenas uma fun��es respons�vel por remo��o em qualquer lugar da lista.
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
        /* n�o achou: retorna lista original*/
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

/**** Implementa��es Stefany Lacroux ****/

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
	tam = listaLength (l); // D� o tamanho da lista
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
	tam = listaLength (l); // D� o tamanho da lista
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


