// -----------------------------------------------------
// Script   : pares_2_30.c
// Descrição: Soma os valores pares de 2 até o 30.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 01/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
	int soma = 0;
	for(int contador = 0; contador <= 30; contador += 2){
		soma += contador;
	}
	printf("Soma: %d\n", soma);
        return 0;
}
