#ifndef MENU_HEADER_H
#define MENU_HEADER_H

#include <stdio.h>
#include <stdlib.h>

/* Protótipos */
int displayMenu(void);
int displaySubmenu(void);
void options1 (Lista *lst_ptr, int opt_sub);
void options2 (Fila *fila_ptr, int opt_sub);
void options3 (Pilha *pilha_ptr, int opt_sub);

#endif
