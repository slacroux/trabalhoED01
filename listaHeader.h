#ifndef LISTA_HEADER_H
#define LISTA_HEADER_H
 
#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

/* Prot�tipos */

/* fun��o de cria��o: retorna uma lista vazia */
Lista* listaCria(void);

/* inser��o no in�cio: retorna a lista atualizada */				// <<<<<<<<<< Unificar fun��es de inser��o no inicio e meio, apenas uma fun��es respons�vel por inser��o em qualquer lugar da lista.
Lista* listaInsereInicio(Lista* l, int i);

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int listaVazia(Lista* l);

/* fun��o busca: busca um elemento na lista */
Lista* listaBusca(Lista* l, int v);

/* fun��o retira: retira elemento da lista */						// <<<<<<<<<<< Unificar fun��es de remo��o no inicio e meio, apenas uma fun��es respons�vel por remo��o em qualquer lugar da lista.
Lista* listaRetira(Lista* l, int v);

void listaLibera(Lista* l);

/**** Implementa��es por: Stefany Lacroux ****/
int listaLength (Lista *l);

Lista* listaInsereMeio(Lista* l, int num);								// <<<<<<<<<<<

/* fun��o imprime: imprime valores dos elementos */
void listaImprime(Lista* l);

/* fun��o que remove do meio da lista */							// <<<<<<<<<<<
Lista* listaRetiraMeio (Lista* l);

#endif