// -----------------------------------------------------
// Script   : even.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int isEven(int num);

int main() {
	int num;
	char resposta;

	printf("Descubra se o número digitado é par.\n");
	printf("[1] - PAR\n");
	printf("[0] - IMPAR\n");
	
	while(resposta != 'N'){

		printf("Digite o número: ");
		scanf("%d", &num);
		printf("%d\n", isEven(num));
		printf("Deseja digitar mais algum numero? [S/N] ");
		scanf(" %c", &resposta);

	}
        return 0;
}

int isEven(int num){
	if(num % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}
