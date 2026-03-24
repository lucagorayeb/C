// -----------------------------------------------------
// Script   : exemplo_escopo.c
// Descrição: Um algoritmo que exemplifica os escopos.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void a(void); // Protótipo de função 
void b(void); // Protótipo de função 
void c(void); // Protótipo de função 

int x = 1; // Variável Global

int main() {
	
	int x = 5; // Variável local para main
	printf("x local no escopo externo de main eh %d\n", x);

	{ // Inicia um novo escopo
		int x = 7;
		printf("x local no escopo interno de main eh %d\n", x);

	} // Encerra o novo escopo 
	
	printf("x local no escopo externo de main eh %d\n", x);
        
	a(); /* a tem x local automático */
	b(); /* b tem x local estático */
	c(); /* c usa x global */
	a(); /* a reinicializa x local automático */
	b(); /* x local estático conserva seu valor anterior */
	c(); /* x global também conserva seu valor */
	
	
	printf("x local em main eh %d\n", x);
	return 0;
}



void a(void){
	int x = 25; // Inicializada sempre que a é chamada
	printf("\nx local em a eh %d depois de entrar em a\n", x);
	x++;
	printf("x local em a e %d antes de sair de a\n", x);
}

void b(void){
	static int x = 50; // Apenas inicialização estática
	
	// Primeira vez que b é chamado
	printf("\nx local estático e %d ao entrar em b\n", x);
	x++;
	printf("x local estático eh %d ao sair de b\n", x);
}

void c(void){
	printf("\nx global e %d ao entrar em c\n", x);
	x *= 10;
	printf("x global e %d ao sair de c\n", x);
}
