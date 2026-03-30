// -----------------------------------------------------
// Script     : apresentarCoisasNatela.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 29/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
        char f[] = "paralelepipedo";
        int b[3];
        int g[4];

        printf("%c\n", f[6]);

        b[3] = 77;
        printf("%d\n", b[3]);

        for(int i = 0; i < 5; i++){
                g[i] = 8;
                printf("array g[%d] = %d\n", i, g[i]);
        }
        return 0;
}
