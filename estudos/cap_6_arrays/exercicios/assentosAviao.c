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
void menuEscolhaOutroAssento(int);
void menuEscolhaOutroAssento(int numero);
int sorteiaAssentoFumante(void);
int sorteiaAssentoNaoFumante(void);
void respostaInvalida(void);
void mostraAssentosDisponiveis(int[], int);

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
                if(i == numero && assentos[i] != 1){
                        assentos[i] = 1;
                }
        }
        mostraAssentosDisponiveis(assentos, TAMANHO);

}

void mostraAssentosDisponiveis(int assentos[], int tamanho){
        for(int i = 1; i <= tamanho; i++){
                if(assentos[i] != 1){
                        if(i <= 5){
                                printf("O assento número %d para fumantes está disponível!\n", i);
                        }else{
                                printf("O assento número %d para não fumantes está disponível!\n", i);
                        }
                }
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
