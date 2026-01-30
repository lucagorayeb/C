// -----------------------------------------------------
// Script   :
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 29/01/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
int contador, grau, total, media;
/* fase de inicialização */
total = 0;
contador = 1;
/* fase de processamento */
while (contador <= 3) {
printf ("Entre com o grau: ");
scanf ("%d", &grau);
total = total + grau;
contador = contador + 1;
}
/* fase de terminação */
media = total / 3;
printf ("A media da turma e %d\n", media);
        return 0;
}
