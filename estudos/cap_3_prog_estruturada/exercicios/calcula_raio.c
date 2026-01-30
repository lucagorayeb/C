// -----------------------------------------------------
// Script   : calcula_raio.c
// Descrição: Programa que calcula o diâmetro e o perímetro 
// 	      de uma circunfêrencia.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 30/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
// Declarando as váriaveis
	float raio, diametro, perimetro, PI = 3.14159;

	printf("Digite o raio: ");
	scanf("%f", &raio);

	diametro = PI*raio*raio;
	perimetro = 2*PI*raio;

	printf("Diâmetro da circuferência: %.2f\n", diametro);
	printf("Perímetro da circuferência: %.2f\n", perimetro);

	return 0;
}
