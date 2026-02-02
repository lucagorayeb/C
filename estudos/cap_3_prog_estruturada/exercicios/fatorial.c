// -----------------------------------------------------
// Script   : fatorial.c
// Descrição: O fatorial de qualquer número a ser informado.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 30/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
// Variáveis
	int fatorial, cont_fatorial=1, resposta_fato;
	
	printf("Digite o fatorial que deseja descobrir: ");
	scanf("%d", &fatorial);
	
	resposta_fato = fatorial;
	
	while(cont_fatorial <= fatorial){
		if(cont_fatorial != 5){
			
			resposta_fato =  resposta_fato * (fatorial - cont_fatorial);
		}
		cont_fatorial++;
	}
	printf("Fatorial: %d\n", resposta_fato);
        
	return 0;
}
