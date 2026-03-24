// -----------------------------------------------------
// Script   :
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 23/03/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <string.h>

int main() {
        char array[] = "vasco da gama";
        int i = 0;
        while(array[i] != '\0'){
                printf("%c", array[i]);
                i++;
        }
        printf("\n");
        return 0;
}

