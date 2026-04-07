// -----------------------------------------------------
// Script     : testing_fprintf.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 03/04/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
        FILE *f = fopen("test.txt", "a");
        fprintf(f, "Fisrt Line");
        fclose(f);
        return 0;
}
