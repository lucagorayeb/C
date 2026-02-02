// -----------------------------------------------------
// Script   : menor_valores_inteiros.c
// Descrição: Passados vários números inteiros o algoritmo
// 	      informa qual é o meior deles.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 01/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
	int contador, numero, quantidade_numero, menor;
	
	printf("Digite quantos número quer comparar? ");
	scanf("%d", &quantidade_numero);

	for(contador = 1; contador <= quantidade_numero; contador++){
		printf("Digite um número: ");
		scanf("%d", &numero);

		if(contador == 1){
			menor = numero;
		}

		if(numero < menor){
			menor = numero;
		}
	}

	printf("O menor número é %d\n", menor);
        return 0;
}
