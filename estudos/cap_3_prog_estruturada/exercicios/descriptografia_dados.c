// -----------------------------------------------------
// Script   : descriptografia_dados.c
// Descrição: Descriptografa o número que é gerado pelo 
// 	      arquivo de criptografia.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 30/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
	
// Declarando as váriaveis
	int numero_inteiro, digito_1, digito_2, digito_3, digito_4;

// Lógica do Sistema
	
        printf("Digite o número para descriptografar: ");
	scanf("%d", &numero_inteiro);

	digito_4 = (((numero_inteiro % 1000) / 100) -7);
	if(digito_4 <= 0){
		digito_4 = (digito_4 + 10) % 10; 
	}

	digito_3 = (((numero_inteiro % 10000) / 1000) -7);
	if(digito_3 <= 0){
                digito_3 = (((digito_3 + 10) % 10) * 10);
        }else{
		digito_3 *= 10;
	}
	

	digito_2 = ((numero_inteiro % 10) -7);
	if(digito_2 <= 0){
                digito_2 = ((digito_2 + 10) % 10) * 100;
        }else{
                digito_2 *= 100;
        }


	digito_1 = (((numero_inteiro % 100) / 10) -7);
	if(digito_1 <= 0){
                digito_1 = ((digito_1 + 10) % 10) * 1000;
        }else{
                digito_1 *= 1000;
        }


	numero_inteiro = digito_1 + digito_2 + digito_3 + digito_4;
	printf("Número descriptografado: %d\n", numero_inteiro);
	return 0;
}
