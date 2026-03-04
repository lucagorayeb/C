// -----------------------------------------------------
// Script     : mdc.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 04/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int mdc(int, int);

int main() {
	int number1, number2;	
	printf("Type two numbers: ");
	scanf("%d %d", &number1, &number2);
	printf("The mdc is %d\n", mdc(number1, number2));	
        return 0;
}

int mdc(int number1, int number2){
	number1 = number1 % number2;
	if(number1 == 0){
		return number2;
	}
	number2 = number2 % number1;
	if(number2 == 0){
		return number1;
	}
}
