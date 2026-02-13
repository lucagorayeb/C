// -----------------------------------------------------
// Script   : sorteio_numeros.c
// Descrição: Faz o sorteio de números aleatórios
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 12/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>

int main() {

	for(int i = 1; i <= 20; i++){
		printf("%10d", 1 + (rand() % 6));
		if(i % 5 == 0){
			printf("\n");
		}
	}
        return 0;
}
