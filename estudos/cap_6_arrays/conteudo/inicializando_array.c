// -----------------------------------------------------
// Script     : inicializando_array.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 16/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

// Inicializando um constante
#define TAMANHO 10

int main() {
        // Inicializando um array de 10 posições vazias
/*        int i, n[10];

        for(i = 0; i <= 9; i++){
                n[i] = 0;
        } 

        printf("%s%13s\n", " Elemento","Valor");

        for(i = 0; i <= 9; i++){
                printf ("%7d%13d\n", i, n[i]);
        } */

        // Inicializando um array de 10 posições preenchidas
/*         int j, m[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
        printf("%s%13s\n", " Elemento","Valor");

        for(j = 0; j <= 9; j++){
                printf ("%7d%13d\n", j, m[j]);
        } */

        // Inicializando um array com um tamanho constante
        /* int s[TAMANHO], c;
        
        for(c = 0; c <= 9; c++){
                s[c] = 2 + 2 * c;
        }

        printf("%s%13s\n","Elemento", "Valor");

        for(c = 0; c <= 9; c++){
                printf("%8d%13d\n", c, s[c]);
        } */

        // Calcula a soma dos elementos de um array 
        int g[TAMANHO] = {1,3,5,4,7,2,99,16,45,67}, p, total = 0;
        
        for(p = 0; p <= 9; p++){
                total += g[p];
        }

        printf("A soma dos elementos do array e %d\n", total);
        return 0;
}
