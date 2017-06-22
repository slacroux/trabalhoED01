#include "filaHeader.h"
#include "listaHeader.h"
#include "pilhaHeader.h"
#include "menuHeader.h"
//#include "main_structure.h"

/*** INCOMPLETA! SOMENTE PARA TESTES ***/

/* Testando !!!! Stefany Lacroux */

int main(void)
{
	int opt, opt_submenu;

	/* Menu de Opções */
	opt = displayMenu();
	while (opt < 1 || opt > 3)
    	{
		printf("\nOpcao inexistente!\nTente Novamente...\n\n");
		opt = displayMenu();
	}
	/* SubMenu de Opções */
    	opt_submenu = displaySubmenu();
    	while (opt < 1 || opt > 3)
    	{
		printf("\nOpcao inexistente!\nTente Novamente...\n\n");
		opt_submenu = displaySubmenu();
    	}
	
	switch(opt) {
		/* Opção LISTA */
		case 1: /* Cria uma lista */
			Lista *lst_ptr = lst_cria();
			system("cls||clear");
			options1 (lst_ptr, opt_submenu);
			break;
			
		/* Opção FILA */
		case 2:
			Fila *fila_ptr = criar();
			system("cls||clear");
			options2 (fila_ptr,opt_submenu);
			break;
		
		/* Opção PILHA */
		case 3:
			Pilha *pilha_ptr = cria();
			system("cls||clear");
			options3 (pilha_ptr, opt_submenu);
			break;

			default:
		}
		
		system("cls||clear");
	}

	return 0;
}




