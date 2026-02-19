// -----------------------------------------------------
// Script   : sorteia_valor_range.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int sorteiaValorRange(int, int);

int main() {

	printf("%.2d\n",sorteiaValorRange(1, 2));
	printf("%.2d\n",sorteiaValorRange(1, 100));
	printf("%.2d\n",sorteiaValorRange(0, 9));
	printf("%.2d\n",sorteiaValorRange(1000, 1112));
	printf("%.2d\n",sorteiaValorRange(-1, 1));
	printf("%.2d\n",sorteiaValorRange(-3, 11));	
        return 0;
}

int sorteiaValorRange(int min, int max){
	srand(time(NULL)); 
	return (rand() % (max - min + 1)) + min;
	
}

