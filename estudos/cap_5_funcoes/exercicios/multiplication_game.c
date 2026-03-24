// -----------------------------------------------------
// Script     : multiplication_game.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 06/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void multiplicationGame(void);
int srandNumbers(void);
void isCorrect(int, int, int);
void stopGame(void);
void isZero(int);

int main() {
	printf("Welcome to the Multiplication Game! [0] - End\n");	
	srand(time(NULL));
    multiplicationGame();
	return 0;
}

int srandNumbers(){
	return 1 + (rand() % 9);
}

void multiplicationGame(){
	int number1 = srandNumbers(), number2 = srandNumbers(), product;

	printf("%d x %d = ", number1, number2);
	scanf("%d", &product);	
	isZero(product);    
	isCorrect(number1, number2 ,product);
}

void isCorrect(int number1, int number2, int product){
	while(number1 * number2 != product){
		printf("Não. Tente Novamente, por favor. [0] - End\n");
		printf("%d x %d = ", number1, number2);
		scanf("%d", &product);
	    isZero(product);    
    }
	printf("Muito bem!\n");
	multiplicationGame();
    
}

void stopGame(){
            printf("Thanks for playing!\n");
            exit(0);
}

void isZero(int product){
    if(product == 0){
        stopGame();
    }
}
