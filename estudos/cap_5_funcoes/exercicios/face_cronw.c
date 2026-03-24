// -----------------------------------------------------
// Script     : face_crown.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 05/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int game(int);

int main() {
	for(int i = 1; i <= 100; i++){
		printf("%d\n", game(i));
	}
        return 0;
}

int game(int number){
	if(number % 2 == 0){
		return 0;
	}else{
		return 1;
	}
}
