// -----------------------------------------------------
// Script     : tratamento_arrays_caracteres.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 17/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {

        char string1[20], string2[] = "string literal";
        int i = 0;

        printf("Entre com uma string: ");
        scanf("%s", string1);
        printf("string 1 eh: %s\nstring 2 eh: %s\nstring 1 com espaços entra caracteres eh: \n", string1, string2);
        
/*         for(i = 0; string1[i] != '\0'; i++){
                printf("%c", string1[i]);
        } */

        while(string2[i] != '\0'){
                printf("%c", string2[i]);
                i++;
        }

        printf("\n");
        return 0;
}