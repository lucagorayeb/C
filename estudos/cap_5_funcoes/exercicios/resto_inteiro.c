// -----------------------------------------------------
// Script   : resto_inteiro.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 19/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int restoInteiro(int, int);

int main() {
	printf("%d\n", restoInteiro(3,2));
        return 0;
}

int restoInteiro(int a, int b){
	return a % b;
}
