// -----------------------------------------------------
// Script   : asterisco.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 19/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void quadradoAsterisco(int);

int main() {
	quadradoAsterisco(6);
        return 0;
}

void quadradoAsterisco(int numero){
	for(int contador1 = 1; contador1 <= numero; contador1++){
		for(int contador2 = 1; contador2 <= numero; contador2++){
			printf("*");
		}
		printf("\n");
	}
}
