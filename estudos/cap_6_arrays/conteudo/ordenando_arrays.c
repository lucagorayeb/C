// -----------------------------------------------------
// Script     : ordenando_arrays.c
// Description: Uma das partes mais importantes das linguagens de
//              programção são as estruturas de ordenação e neste arquivo
//              irei estudar elas.
// Version    : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 29/03/2026
// License    : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void bubleSort(void);
void pesquisaLinear(void);

int main() {
        //bubleSort();
        pesquisaLinear();
        return 0;
}

void bubleSort(void){
        int array[8] = {7, 3, 16, 9, 1, 34, 25, 12};
        int hold = 0;

        for(int i = 0; i < 8; i++){
                if(array[i] > array[i+1] && i < 7){
                        hold = array[i];
                        array[i] = array[i + 1];
                        array[i+1] = hold;
                }
                for(int j = 0; j < i; j++){
                        if( array[i] < array[j]){
                                hold = array[j];
                                array[j] = array[i];
                                array[i] = hold;
                        }
                }
        }

        for(int c = 0; c < 8; c++){
                printf("array[%d] = %d\n", c, array[c]);
        }
}




