// -----------------------------------------------------
// Script   : do_while.c
// Descrição: Apenas testando o do while.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 01/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
	int contador = 1;

	do{
		printf("Número: %d\n", contador);
	}while(++contador <= 10);
        return 0;
}
