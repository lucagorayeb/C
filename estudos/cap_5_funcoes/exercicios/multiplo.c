// -----------------------------------------------------
// Script   : multiplo.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int multiplo(int, int);

int main() {
	
	printf("%d\n", multiplo(2, 8));
        return 0;
}

int multiplo(int num1, int num2){
	if(num2 % num1 == 0){
		return 1;
	}else{
		return 0;
	}
}
