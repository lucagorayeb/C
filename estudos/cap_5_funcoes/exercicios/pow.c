// -----------------------------------------------------
// Script   : pow.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 12/03/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int myPow(int, int);

int main() {
        int base, pow, value;
        printf("Type a number: ");
        scanf("%d", &base);
        printf("Type a pow: ");
        scanf("%d", &pow); 
        value = myPow(base, pow );
        printf("The final value is %d\n", value);
        return 0;
}

int myPow(int base, int pow){
    if(pow != 1){
        return base * myPow(base, pow - 1);
    }else{
        return base;
    }
}
