// -----------------------------------------------------
// Script   : parte_inteira.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 19/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int parteInteira(int, int);

int main() {
	printf("%d\n", parteInteira(3,2));
        return 0;
}

int parteInteira(int a, int b){
	return (a / b) % 10;
}
