// -----------------------------------------------------
// Script     : perfect_number.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 03/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int calculatePerfectNumber(int);
void isPerfectNumber(int);

int main() {

	for(int i = 1; i <= 1000; i++){
		isPerfectNumber(i);
	}	
        return 0;
}

int calculatePerfectNumber(int number){
	int factor = 0;
	for(int i = 1; i < number; i++){
		if(i != 1 && number % i == 0){
			factor += i;
		}
	}
	if(number != 1){
		return factor + 1;
	}else{
		return factor;
	}
}

void isPerfectNumber(int number){
	
	int control_number = calculatePerfectNumber(number);
	
	if(number == control_number){
	
		printf("The number %d is perfect!\n", number);
	
	}/*else{
	
		printf("The number %d is not perfect!\n", number);
		printf("Returned the %d\n", control_number);
	}*/
}

