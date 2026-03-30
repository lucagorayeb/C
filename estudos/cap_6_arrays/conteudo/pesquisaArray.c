// -----------------------------------------------------
// Script     : pesquisaArray.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 29/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void pesquisaLinear(void);

int main() {
        pesquisaLinear();
        return 0;
}

// A pesquisa binária é bem lenta pois tempo n de execução
// é útil para listas pequena. O array não precisa estar em
// ordem para que ela seja usada.

void pesquisaLinear(void){
        int array[8] = {7, 3, 16, 9, 1, 34, 25, 12};
        int hold = 1;

        for(int c = 0; c < 8; c++){
                if(array[c] == hold){
                        printf("Valor encontrado na posição ");
                        printf("array[%d] = %d\n", c, array[c]);
                        break;
                }

                if(c == 7 && array[c] != hold){
                        printf("Valor não existe no array.\n");
                }
        }
}
