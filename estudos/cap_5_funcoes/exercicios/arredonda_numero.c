// -----------------------------------------------------
// Script   : arredonda_numero.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <math.h>
#include <stdbool.h>
double arredonda(int);

int main() {
	int numero;
	char resposta;

	while(true){
		printf("\nDigite um número inteiro: ");
		scanf("%d", &numero);
		double y = arredonda(numero);		
		printf("Numero original: %d\n", numero);
		printf("Numero arredondado: %.2lf\n", y);

		printf("Deseja continuar? [S/N] ");
		scanf(" %c", &resposta);

		if(resposta == 'N'){
			break;
		}
	}

        return 0;
}

double arredonda(int numero){
	numero = numero + 0.5;
	return floor(numero);

}
