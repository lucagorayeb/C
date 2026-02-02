// -----------------------------------------------------
// Script   :
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 30/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
// Variáveis
        float fatorial, cont_fatorial=1, cont_expressao_fatorial = 1, resposta_fato; 
	float resposta_expressao_fato;

        printf("Digite o fatorial que deseja descobrir: ");
        scanf("%f", &fatorial);

        resposta_fato = fatorial;
	resposta_expressao_fato += 1/fatorial;

	while(cont_expressao_fatorial <= fatorial){
        	
		while(cont_fatorial <= cont_expressao_fatorial){
                	
			if(cont_fatorial != fatorial){
				resposta_fato =  resposta_fato * (fatorial - cont_fatorial);              	
			}
			cont_fatorial++;
        	}
		resposta_expressao_fato += 1/resposta_fato;
		cont_expressao_fatorial++;
	}
	resposta_expressao_fato += 1;
	
        printf("Fatorial: %.2f\n", resposta_expressao_fato);

        return 0;
}
