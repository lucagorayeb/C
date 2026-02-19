// -----------------------------------------------------
// Script   : arredonda_decimal.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <math.h>

double arredondaParaInteiro(int);
double arredondaParaDecimos(int);
double arredondaParaCentesimos(int);
double arredondaParaMilesimos(int);

int main() {
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);
	printf("O inteiro eh %.2lf\n", arredondaParaInteiro(numero));
        printf("O decimo eh %.2lf\n", arredondaParaDecimos(numero));
        printf("O centesimo eh %.2lf\n", arredondaParaCentesimos(numero));
        printf("O milesimo eh %.2lf\n", arredondaParaMilesimos(numero));



        return 0;
}

double arredondaParaInteiro(int numero){
	numero = (numero * 1) + 0.5;
	return floor(numero);
}

double arredondaParaDecimos(int numero){
        numero = (numero * 10) + 0.5;
        return floor(numero) / 10;
}

double arredondaParaCentesimos(int numero){
        numero = (numero * 100) + 0.5;
        return floor(numero) / 100;
}

double arredondaParaMilesimos(int numero){
        numero = (numero * 1000) + 0.5;
        return floor(numero) / 1000;
}


