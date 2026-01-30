// -----------------------------------------------------
// Script   : multiplo_dois.c
// Descrição: Calcula o múltiplo de dois até o número indicado
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 30/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
// Declaração da váriaveis 
	int multiplo = 1, maximo = 64;
	
	while(multiplo < 64){
		multiplo *= 2;
	}
	printf("Multiplo: %d\n", multiplo);

	return 0;
}
