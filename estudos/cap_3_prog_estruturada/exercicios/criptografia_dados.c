// -----------------------------------------------------
// Script   : criptografia_dados.c
// Descrição: Criptografa os dados que serão transmitidos.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 30/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {

// Declara as váriaveis
	int numero_inteiro, digito_1, digito_2, digito_3, digito_4;
        int numero_criptografado;

// Lógica do Sistema

	printf("Digite o número inteiro de quatro digítos: ");
	scanf("%d", &numero_inteiro);	
	digito_4 = (((numero_inteiro % 10) + 7) % 10) * 100;
	
	digito_3 = ((((numero_inteiro % 100) / 10) + 7) % 10) * 1000;

	digito_2 = ((((numero_inteiro % 1000) / 100) + 7) % 10);
	
	digito_1 = ((((numero_inteiro % 10000) / 1000) + 7) % 10) * 10;

	numero_criptografado = digito_1 + digito_2 + digito_3 + digito_4;
	printf("Número criptografado: %d\n", numero_criptografado);
	return 0;
}
