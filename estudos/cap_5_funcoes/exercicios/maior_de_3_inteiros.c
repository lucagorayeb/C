// -----------------------------------------------------
// Script   : maior_de_tres_inteiros.c
// Descrição: Verifica qual é o maior dos 3 inteiros 
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 12/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int maximum(int, int, int); // Protótipo da funcao

int main() {

	int a, b, c;

	printf("Entre com os tres inteiros: ");
	scanf("%d%d%d", &a, &b, &c);

	printf("O maior eh: %d\n", maximum(a,b,c));
        return 0;
}

// Definição da função maximum

int maximum(int x, int y, int z){
	int max = x;
	if (y > max){
		max = y;
	}

	if (z > max){
		max = z;
	}

	return max;
}
