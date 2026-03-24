// -----------------------------------------------------
// Script     : rolar_dado.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 17/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
/* Rolar um dado de seis faces 6000 vezes */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 7
main() {
        int face, jogada, frequencia[TAMANHO] = {0};
        
        srand(time(NULL));

        for (jogada = 1; jogada <= 6000; jogada++) {
                face = rand() % 6 + 1 ;
                ++frequencia[face]; 
        }

        printf("%s%18s\n", "Face", "Frequencia");

        for (face = 1; face <= TAMANHO - 1; face++){
                printf("%4d%18d\n", face, frequencia[face]);
        }
        return 0;
}
