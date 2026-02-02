// -----------------------------------------------------
// Script   : sequencia_inteiros.c
// Descrição: Calcula uma sequencia de números fornecidos, 
// 	      o primeiro número fornecido deve ser a quantidade
// 	      de números a serem somados.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 01/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
	int quantidade_numeros, cont_numero, numero, soma = 0;

	printf("Digite a quantidade de números a serem somados: ");
	scanf("%d", &quantidade_numeros);

	for(cont_numero = 1; cont_numero <= quantidade_numeros; cont_numero++){
		printf("Numero a ser somado: ");
		scanf("%d", &numero);

		soma += numero;
	}
	printf("O resultado foi %d\n", soma);
        return 0;
}
