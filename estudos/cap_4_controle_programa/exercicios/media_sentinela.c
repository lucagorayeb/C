// -----------------------------------------------------
// Script   : media_sentinela.c
// Descrição: Faz o calculo de números e depois a media 
// 	      utiliza como sentinela o número 9999
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 01/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
	int numero, media = 0, contador=0;
	
	do{
		printf("Digite o número: ");
		scanf("%d", &numero);
		
		if(numero != 9999){
			contador++;
			media += numero; 
		}
	}while(numero != 9999);

	media /= contador;

	printf("Media: %d\n", media);

        return 0;
}
