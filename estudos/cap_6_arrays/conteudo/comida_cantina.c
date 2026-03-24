// -----------------------------------------------------
// Script     : comida_cantina.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 16/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
        int array_resposta[4], resposta = 0, nota, array_nota[5]={0, 0, 0, 0, 0};

        while(resposta <= 4){
                printf("Nota para a comida da cantina? ");
                scanf("%d", &nota);
                array_resposta[resposta] = nota;
                resposta++;
        }

        for(int i = 1; i <= 5; i++){
                if(array_resposta[i] == i){
                        array_nota[i]++;
                }
        }

        for(int j = 1; j <= 5; j++){
                printf("%d\n", array_nota[j]);
        }


        return 0;
}
