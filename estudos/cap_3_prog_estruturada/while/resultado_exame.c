// -----------------------------------------------------
// Script   : resultado_exame.c
// Descrição: Vai contar as notas dos alunos que passaram
// 	      e os que não passaram no exame.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 29/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {

// Definição e inicialização das variáveis
	int cont_resultados = 1, resultado, reprovado = 0, aprovado = 0;

// Lógica do programa
	while(cont_resultados <= 10){
		printf("Entre com o resultado: ");
		scanf("%d", &resultado);

		if(resultado == 1){
			aprovado = aprovado + 1;
			cont_resultados = cont_resultados + 1;
		}else if(resultado == 2){
			reprovado = reprovado + 1;
			cont_resultados = cont_resultados + 1;
		}else{
			printf("Número invalido!\n");
			printf("Digite [1] para aprovado.\n");
			printf("Digite [2] para reprovado.\n");
		}
	}

// Exibe os resultados dos aprovados e dos reprovados
	printf("A quantidade de aprovados foi %d\n", aprovado);
	printf("A quantidade de reprovados foi %d\n", reprovado);

	if(aprovado > 8){
		printf("Cobrar taxa escolar!");
	}
        
	return 0;
}
