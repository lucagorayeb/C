// -----------------------------------------------------
// Script   : media_turma_sentinela.c
// Descrição: Calcula a média da turma com um valor sentinela
// 	      assim não precisamos especificar qual vai ser o
// 	      valor de notas a serem somadas.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 29/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {

// Declarando Váriaveis
	int contador_notas;
       	float total_notas, media_turma, notas;

// Inicializando váriaveis
	total_notas = 0;
	contador_notas = 0;
	
// Fazendo a contagem das notas
	printf("Programa que calcula média.\n");
	printf("[Digite -1 para ver média final.]\n");
	printf("Digite a nota: ");
	scanf("%f", &notas);
	while(notas != -1){
		total_notas = total_notas + notas;
		contador_notas = contador_notas + 1;
	
		printf("Digite a nota: ");
		scanf("%f", &notas);
	}

// Calcula média da turma 
	media_turma = total_notas / contador_notas;
	if(contador_notas == 0){
		printf("Nenhuma nota foi fornecida.\n");
	}else{
		printf("A media da turma foi %f\n", media_turma);
	}
	
	return 0;
}
