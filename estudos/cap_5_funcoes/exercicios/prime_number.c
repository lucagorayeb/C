// -----------------------------------------------------
// Script     : prime_number.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 04/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void isPrime(int);

int main() {
	for(int i = 1; i <= 10000; i++){
		isPrime(i);	
	}
        return 0;
}

void isPrime(int number){
	int pivo = 0;
	for(int i = 1; i <= number; i++){
		if(number % i == 0){
			pivo++;	
		}

		if(pivo > 2){
			break;
		}
	}
	if(pivo == 2){
		printf("The number %d is prime!\n", number);
	}
}
