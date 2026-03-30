// -----------------------------------------------------
// Script     : arrayBidimensional.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 29/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void arrayBidimensional(void);
void declarandoArrayBidimenssional(void);

int main() {
        arrayBidimensional();
        return 0;
}

void declarandoArrayBidimenssional(void){
                int b[2][2];
                int a[2][2] = {(1, 2), (3, 4)}
}

void arrayBidimensional(void){
        for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                        printf("* ");
                }
                printf("\n");
        }
}
