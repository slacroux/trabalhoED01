#include "filaHeader.h"
#include "listaHeader.h"
#include "pilhaHeader.h"
#include "menuHeader.h"
#include "main_structure.h"

/*** INCOMPLETA! SOMENTE PARA TESTES ***/
/* Teste SL */

int main(void)
{
	int opt;

	/* Lista que armazenara os ponteiros para lista, fila e pilha */
	MainStruct *super_lst;
	super_lst = (*MainStruct) malloc (sizeof(MainStruct);
	
	displayMenu(); /* Exibe o menu de opcoes */

	scanf("%d", &opt); /* Realiza leitura opcao selecionado no displayMenu() */
	
	while (opt != -1) {

		switch(opt) {
	
			case 1: /* Cria uma lista */
				Lista *lst_ptr = lst_cria();
				system("cls||clear");
				displaySubmenu(); /* Chama Submenu, como opcoes para trabalhar a estrutura */
			break;

			case 2:
				Fila *fila_ptr = criar();
				system("cls||clear");
				displaySubmenu();
			break;

			case 3:
				struct node *pilha_ptr = cria();
				system("cls||clear");
				displaySubmenu();
			break;

			default:
		}
		
		system("cls||clear");
	}

	return 0;
}




