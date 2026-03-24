// -----------------------------------------------------
// Script     : second_multiplication_game.c
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
int srandCommentNumber(void);
void errorComment(void);
void hitComment(void);

int main() {
	printf("Welcome to the Multiplication Game! [0] - End\n");	
	srand(time(NULL));
    multiplicationGame();
	return 0;
}

int srandNumbers(){
	return 1 + (rand() % 9);
}

int srandCommentNumber(){
	return 1 + (rand() % 4);
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
        errorComment();
        printf(" [0] - END\n");
		printf("%d x %d = ", number1, number2);
		scanf("%d", &product);
	    isZero(product);    
    }
	hitComment();
    printf(" [0] - END\n");
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

void errorComment(){
    switch(srandCommentNumber()){
        case 1:
            printf("No. Try again, please.");
            break;
        
        case 2:
            printf("Wrong. Try one more time.");
            break;

        case 3:
            printf("Don't give up. Try again!");
            break;

        case 4: 
            printf("No. Do it again.");
            break;
    }
}

void hitComment(){
    switch(srandCommentNumber()){
        case 1:
            printf("Very good!");
            break;
        
        case 2:
            printf("Excelent.");
            break;

        case 3:
            printf("Good job!");
            break;

        case 4: 
            printf("Rigth. Keep with the good work!");
            break;
    }
}
