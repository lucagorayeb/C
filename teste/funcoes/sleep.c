// -----------------------------------------------------
// Script     : sleep.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 27/04/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <unistd.h>

void sleepOneSecond(void);

int main() {
        printf("Olá. Como está?\n");
        sleep(1);
        printf("Bem.\n");
        return 0;
}
