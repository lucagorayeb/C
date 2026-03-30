// -----------------------------------------------------
// Script     : intrucoesSimplesArray.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 30/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void a(void);
void b(void);
void c(void);
void d(void);

int main() {
        a();
        b();
        c();
        d();
        return 0;
}

void a(void){
        int tamanho = 10;
        int contagem[tamanho];

        for(int c = 0; c < tamanho; c++){
                contagem[c] = 0;
                printf("contagem[%d] = %d\n", c, contagem[c]);
        }
}

void b(void){
        int tamanho = 15;
        int contagem[tamanho];

        for(int c = 0; c < tamanho; c++){
                contagem[c] = 0;
                contagem[c] += 1;
                printf("contagem[%d] = %d\n", c, contagem[c]);
        }
}

void c(void){
        int tamanho = 2;
        double contagem[tamanho];

        for(int c = 0; c < tamanho; c++){
                printf("Insira um valor em ponto flutuante: ");
                scanf("%lf", &contagem[c]);
                printf("contagem[%d] = %.2lf\n", c, contagem[c]);
        }
}

void d(void){
        int contagem[] = {1, 2, 3, 4, 5};
        printf("Indice          Valor\n");
        for(int l = 0; l < 5; l++){
                for(int c = 0; c < 1; c++){
                        printf("contagem         %d ", contagem[l]);
                }
                printf("\n");
        }
}
