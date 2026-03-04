// -----------------------------------------------------
// Script     : backwards_number.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 04/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int reverseNumber(int);

int main() {
	int number;
	printf("Digite um número: ");
	scanf("%d", &number);
	printf("%d\n", reverseNumber(number));
        return 0;
}

int reverseNumber(int number){
	int reverse = 0;

	while(number > 0){
		int dgt = number % 10;
		reverse = (reverse * 10) + dgt;
		number = number / 10;
	}

	return reverse;
}
		


