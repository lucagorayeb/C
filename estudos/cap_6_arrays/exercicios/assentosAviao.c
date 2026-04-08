// -----------------------------------------------------
// Script     : assentosAviao.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 06/04/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int inicializaArray(void);
void menuAviao(void);
int ehFumante(int);
int marcaAssento(int);
int sorteiaAssentoFumante(void);
int sorteiaAssentoNaoFumante(void);
void respostaInvalida(void);
//void mostraAssentosDisponiveis(int[], int);
void verificaAviaoLotado(int*, int, int);
int assentoFumantesCheio(int*, int);
int assentoNaoFumantesCheio(int*, int);
int perguntaAoNaoFumante(void);
int perguntaAoFumante(void);
int verificaRespostaDaPergunta(char resposta);

int main() {
        srand(time(NULL));
        menuAviao();
        return 0;
}

void menuAviao(void){
        int resposta;

        printf("BEM VINDO AO AVIÃO C\n");
        printf("\nFavor, digitar 1 para escolher o assento de fumante!\n");
        printf("Favor, digitar 2 para escolher o assento de não fumante!\n");
        printf("\nDigite um número, por favor: ");
        scanf("%d", &resposta);

        ehFumante(resposta);
}

int ehFumante(int numero){
        int assento;
        if(numero == 1){

                assento = sorteiaAssentoFumante();
                marcaAssento(assento);


        }else if(numero == 2){

                assento = sorteiaAssentoNaoFumante();
                marcaAssento(assento);


        }else{
                respostaInvalida();
                menuAviao();
        }
}

int marcaAssento(int numero){
        int static assentos[TAMANHO];

        for(int i = 1; i <= TAMANHO; i++){
                if(i <= 5 && assentos[i] != 1){
                        assentos[i] = 1;
                }
        }
        verificaAviaoLotado(assentos, TAMANHO, numero);
        //mostraAssentosDisponiveis(assentos, TAMANHO);

}

/*void mostraAssentosDisponiveis(int assentos[], int tamanho){
        for(int i = 1; i <= tamanho; i++){
                if(assentos[i] != 1){
                        if(i <= 5){
                                printf("O assento número %d para fumantes está disponível!\n", i);
                        }else{
                                printf("O assento número %d para não fumantes está disponível!\n", i);
                        }
                }
        }
}*/

void verificaAviaoLotado(int *array, int tamanho, int resposta){

        int assentoFumante = assentoFumantesCheio(array, tamanho);
        int assentoNaoFumante = assentoNaoFumantesCheio(array, tamanho);

        if(assentoFumante == 0 && assentoNaoFumante == 0){
                printf("Avião atingiu a capacidade máxima!\n");
                printf("Próximo voo em 3 horas!\n");
        }else if(assentoFumante == 1 && assentoNaoFumante == 0){
                if(resposta == 2){
                        perguntaAoNaoFumante();
                }
        }else if(assentoFumante == 0 && assentoNaoFumante == 1){
                perguntaAoFumante();
        }
}

int assentoFumantesCheio(int *array, int tamanho){
        tamanho /= 2;
        int verificador = 0;
        for(int i = 1; i <= tamanho; i++){
                if(array[i] == 1){
                        verificador++;
                }
        }

        if(verificador == tamanho){
                return 0; // true
        }else{
                return 1; // false
        }
}

int assentoNaoFumantesCheio(int *array, int tamanho){
        int verificador = 0;
        for(int i = 6; i <= tamanho; i++){
                if(array[i] == 1){
                        verificador++;
                }
        }

        if(verificador == tamanho/2){
                return 0; // true
        }else{
                return 1; // false
        }
}

int perguntaAoNaoFumante(void){
        char resposta;
        printf("Temos assento livre no setor dos fumantes!\n");
        printf("Gostaria de sentar lá? [S/N] ");
        scanf("%c", &resposta);
        return verificaRespostaDaPergunta(resposta);

}

int perguntaAoFumante(void){
        char resposta;
        printf("Temos assento livre no setor dos não fumantes!\n");
        printf("Gostaria de sentar lá? [S/N] ");
        scanf("%c", &resposta);
        return verificaRespostaDaPergunta(resposta);

}

int verificaRespostaDaPergunta(char resposta){
        if(resposta == 'S' || resposta == 's'){
                return 0;
        }else{
                return 1;
        }
}

int sorteiaAssentoFumante(void){
        return 1 + (rand() % 5);
}

int sorteiaAssentoNaoFumante(void){
        return (rand() % (10 - 6 + 1)) + 6;
}

void respostaInvalida(void){
        printf("Resposta incorreta!\n");
}
