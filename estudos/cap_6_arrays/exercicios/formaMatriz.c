// -----------------------------------------------------
// Script     : formaMatriz.c
// Description:
// Version    : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 31/03/2026
// License    : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
        int quantLinhas = 3;
        int quantColunas = 5;
        int zero = 0;

        for(int linhas = 0; linhas <= quantLinhas; linhas++){
                for(int colunas = 0; colunas <= quantColunas; colunas++){
                        printf("array[%d][%d] = %d ", linhas, colunas, zero);
                }
                printf("\n");
        }
        return 0;
}
