// -----------------------------------------------------
// Script     : mostraSeNaoForRepetido.c
// Description:
// Version    : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 30/03/2026
// License    : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void mostraSeNaoForRepetido(void);

int main() {
        mostraSeNaoForRepetido();
        return 0;
}

void mostraSeNaoForRepetido(){
        int array[6] = {11, 20, 34, 20, 11, 34};
        int arr[6];
        for(int i = 0; i < 6; i++){
                arr[i] = array[i];
        }

        for(int j = 0; j < 6; j++){
                for(int c = 0; c < 6; c++){
                        if(arr[j] == arr[c]){
                                if(j != c){
                                        break;
                                }else{
                                        printf("%d\n", arr[c]);
                                }
                        }
                }
        }
}
