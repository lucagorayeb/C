// -----------------------------------------------------
// Script   : fatorial_recursivo.c
// Descrição: Exemplo de um programa de recursão de
// 	      fatoriais.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

long fatorial(long);

int main() {
	int i;
	
	for(i = 1; i < 10; i++){
		printf("%2d! = %ld\n", i, fatorial(i));
	}
        return 0;
}

// Definição recursiva da função fatorial
long fatorial(long numero){
	if(numero <= 1){
		return 1;
	}else{
		return (numero * fatorial(numero - 1));
	}
}
