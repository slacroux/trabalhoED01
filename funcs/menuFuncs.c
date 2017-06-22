/*** FUNÇÕES PARA DISPLAY DOS MENUS *** (INCOMPLETO!) */   

#include "menuHeader.h"

// Exibe o menu principal.
int displayMenu()
{
	int op;
	printf("%s\n\n%s\n%s\n%s\n\n%s\n\n",
		"***** Entre opÃ§Ã£o desejada*****",
			"1 - Criar Lista.",
			"2 - Criar fila.",
			"3 - Criar pilha.",
		"*******************************");
	scanf("%d", &op);
    	return op;
}

// Exibe menu expecífico de operações
int displaySubmenu(void)
{
	int op;
	printf("%s\n\n%s\n%s\n%s\n\n%s\n\n",
		"***** Entre opÃ§Ã£o desejada*****",
			"1 - Inserir elemento.",				
			"2 - Retirar elemento.",				
			"3 - Liberar lista.",												
			"4 - Editar conteÃºdo de um elemento.",	
		"*******************************");	
	scanf("%d", &op);
    	return op;
}

/* Trata LISTA */
void options1 (Lista *lst_ptr, int opt_sub)
{
    int n;
    switch (opt_sub)
    {
        /* Inserir Elemento na Lista */
        case 1:
            printf("\nElemento a ser inserido:  ");
            scanf("%d", &n);
            listaInsereInicio(lst_ptr, n);
            listaImprime(lst_ptr);
            break;

        /* Retirar Elemento da Lista */
        case 2:
            printf("\nElemento a ser removido:  ");
            scanf("%d", &n);
            listaRetira(lst_ptr, n);
            listaImprime(lst_ptr);
            break;

        /* Liberar Lista */
        case 3:
            listaLibera(lst_ptr);
            break;

        /* Editar conteúdo da Lista */
        case 4:
            /* ? */
            break;
    }
}

/* Trata FILA */
void options2 (Fila *fila_ptr, int opt_sub)
{
    int n;
    switch (opt_sub)
    {
        /* Inserir Elemento na Fila */
        case 1:
            printf("\nElemento a ser inserido:  ");
            scanf("%d", &n);
            insereFila (fila_ptr, n);
            filaImprime(fila_ptr);
            break;

        /* Retirar Elemento da Fila */
        case 2:
            removeFila (fila_ptr);
            filaImprime(fila_ptr);
            break;

        /* Liberar Fila */
        case 3:
            filaLibera(fila_ptr);
            break;

        /* Editar conteúdo da Fila */
        case 4:
            /* ? */
            break;
    }
}

/* Trata PILHA */
void options3 (Pilha *pilha_ptr, int opt_sub)
{
    int n;
    switch (opt_sub)
    {
        /* Inserir Elemento na Pilha */
        case 1:
            printf("\nElemento a ser inserido:  ");
            scanf("%d", &n);
            pilhaPush(pilha_ptr, n);
            pilhaPeek(pilha_ptr);
            break;

        /* Retirar Elemento da Pilha */
        case 2:
            PilhaPop(pilha_ptr);
            pilhaPeek(pilha_ptr);
            break;

        /* Liberar Pilha */
        case 3:
            pilhaLibera(pilha_ptr);
            break;

        /* Editar conteúdo da Pilha */
        case 4:
            /* ? */
            break;
    }
}
