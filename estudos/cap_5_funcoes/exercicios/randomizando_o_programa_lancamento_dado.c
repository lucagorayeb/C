// -----------------------------------------------------
// Script   : randomizando_o_programa_lancamento_dado.c
// Descrição: Faz um randomização o programa lancamento_dado
// 	      atráves de um unsigned int.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 12/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>

int main() {

	int i;
	unsigned semente;

	printf("Entre com a semente: ");
	scanf("%u", &semente);
	
	srand(semente);

	for(i = 1; i <= 10; i++){
		printf("%10d", 1 + (rand() % 6));
		
		if(i % 5 == 0 ){
			printf("\n");
		}
	}
        return 0;
}
