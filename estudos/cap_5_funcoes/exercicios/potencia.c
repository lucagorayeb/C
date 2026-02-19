// -----------------------------------------------------
// Script   : potencia.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

double potencia(double, int);

int main() {
	double base;
	int expoente;

	printf("Informe qual o numero base: ");
	scanf("%lf", &base);

	printf("Informe qual vai ser o expoente: ");
	scanf("%d", &expoente);
        
	printf("A potencia eh %.1lf\n", potencia(base, expoente));
	return 0;
}

double potencia(double base, int expoente){
	double potencia = 1;
	for(int i = 1; i <= expoente; i++){
		potencia *= base; 
	}
	return potencia;
}
