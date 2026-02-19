// -----------------------------------------------------
// Script   : hipotenusa.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <math.h>

double hipotenusa(double, double);

int main() {

	double lado1, lado2;

	printf("Insira o valor do primeiro lado: ");
	scanf("%lf", &lado1);

	printf("Insira o valor do segundo lado: ");
	scanf("%lf", &lado2);

	printf("O valor da hipotenusa eh %.1lf\n", hipotenusa(lado1, lado2));

        return 0;
}

double hipotenusa(double lado1, double lado2){
	double b = pow(lado1, 2.0);  
	double c = pow(lado2, 2.0);
	double h = b + c;
	return sqrt(h);
}
