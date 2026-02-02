// -----------------------------------------------------
// Script   : fatorial.c
// Descrição: Calcula o fatorial de números inteiros.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 01/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {

	int fatorial;

	printf("Digite até qual fatorial vai ser calculado: ");
	scanf("%d", &fatorial);

	for(int contador_fatorial = 0; contador_fatorial <= fatorial; contador_fatorial++){
		
		long double resposta_fatorial = contador_fatorial;
		
		for(int contador_termo_fatorial = 1; contador_termo_fatorial <= contador_fatorial; contador_termo_fatorial++){
			
			if(contador_termo_fatorial != contador_fatorial){
				resposta_fatorial *= (contador_fatorial - contador_termo_fatorial);	
			}

			if(contador_fatorial == 1){
				resposta_fatorial *= (contador_fatorial - contador_termo_fatorial);
			}
		}
		if(contador_fatorial != 0 || resposta_fatorial != 0){
			printf("O fatorial de %d eh %.0Lf\n", contador_fatorial, resposta_fatorial);
		}
	}

        return 0;
}
