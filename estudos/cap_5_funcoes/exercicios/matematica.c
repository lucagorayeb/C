// -----------------------------------------------------
// Script   : matematica.c
// Descrição: Resolvendo exercicíos de lógica de 
// 	      programação em c.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <math.h>

int main() {
	double x;
	
	// Função fabs
	printf("Mostra o retorno da funcao fabs ");
	x = fabs(7.5);
	printf("%.2lf\n ", x);
	
        // Função floor
        printf("Mostra o retorno da funcao floor ");
        x = floor(7.5);
        printf("%.2lf\n ", x);

        // Função fabs
        printf("Mostra o retorno da funcao fabs ");
        x = fabs(0.0);
        printf("%.2lf\n ", x);


        // Função ceil
        printf("Mostra o retorno da funcao ceil ");
        x = fabs(0.0);
        printf("%.2lf\n ", x);

        // Função fabs
        printf("Mostra o retorno da funcao fabs ");
        x = fabs(-6.4);
        printf("%.2lf\n ", x);

        // Função ceil
        printf("Mostra o retorno da funcao ceil ");
        x = fabs(-6.4);
        printf("%.2lf\n ", x);

        // Função ceil, fabs e floor 
        printf("Mostra o retorno da funcao ceil, fabs, floor ");
        x = ceil(-fabs(-8+floor(-5.5)));
        printf("%.2lf\n ", x);

        return 0;
}
