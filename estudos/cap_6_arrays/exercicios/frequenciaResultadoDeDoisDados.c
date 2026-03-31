// -----------------------------------------------------
// Script     : frequenciaResultadoDeDoisDados.c
// Description:
// Version    : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 31/03/2026
// License    : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define TAMANHO 13

void arrayComFrequenciaDosResultados(void);
int rolarDado(void);
int somaResultadoDoDado(void);

int main() {
        srand(time(NULL));
        arrayComFrequenciaDosResultados();

        return 0;
}

int rolarDado(){
        return 1 + (rand() % 6);
}

int somaResultadoDoDado(){
        return rolarDado() + rolarDado();
}

void arrayComFrequenciaDosResultados(void){
        int array[TAMANHO];

        for(int n = 0; n < TAMANHO; n++){
                array[n] = 0;
        }

        for(int c = 0; c < 36001; c++){
                int soma = somaResultadoDoDado();
                for(int i = 0; i < TAMANHO; i++){
                        if(i == soma){
                                array[i] = array[i] + 1;
                        }
                }
        }


        for(int j = 0; j < TAMANHO; j++){
                if(j != 0 && j != 1){
                        printf("A frequencia do valor %d eh %d\n", j, array[j]);
                }
        }
}


