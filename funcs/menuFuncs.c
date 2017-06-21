/*** FUNLÃ‡Ã•ES PARA DISPLAY DOS MENUS *** (INCOMPLETO!) */   

#include "menuHeader.h"

// Exibe o menu principal.
void displayMenu()
{
	printf("%s\n\n%s\n%s\n%s\n\n%s\n\n",
		"***** Entre opÃ§Ã£o desejada*****",
			"1 - Criar Lista.",
			"2 - Criar fila.",
			"3 - Criar pilha.",
		"*******************************");

}

// Exibe menu expecífico de operações
void displaySubmenu(void)
{
	printf("%s\n\n%s\n%s\n%s\n\n%s\n\n",
		"***** Entre opÃ§Ã£o desejada*****",
			"1 - Inserir elemento.",				
			"2 - Retirar elemento.",				
			"3 - Liberar lista.",							
			/*"4 - Mover elemento.", ELIMINAR */					
			"4 - Editar conteÃºdo de um elemento.",	
		"*******************************");	
}
