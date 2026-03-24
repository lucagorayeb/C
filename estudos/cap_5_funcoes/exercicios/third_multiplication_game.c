// -----------------------------------------------------
// Script     : third_multiplication_game.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 06/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void multiplicationGame(int, int);
int srandNumbers(void);
void isCorrect(int, int);
void stopGame(void);
void isZero(int);
int srandCommentNumber(void);
void errorComment(void);
void hitComment(void);
int calculateNumbers(int, int);
int userAnswer(void);
void askUser(int, int);
void startGame();

int main() {
	printf("Welcome to the Multiplication Game!\n");	
	srand(time(NULL));
    startGame();
	return 0;
}

int calculateNumbers(int number1, int number2){
    return number1 * number2;
}

int srandNumbers(){
	return 1 + (rand() % 9);
}

int srandCommentNumber(){
	return 1 + (rand() % 4);
}

int userAnswer(){
	int user_answer;
    scanf("%d", &user_answer);
    return user_answer;
}

void askUser(int number1, int number2){
    printf("%d x %d = ", number1, number2);
}

void startGame(){
    int number1 = srandNumbers();
    int number2 = srandNumbers();
    multiplicationGame(number1, number2);
}

void multiplicationGame(int number1, int number2){
	askUser(number1, number2);
    isCorrect(number1, number2);
}

void isCorrect(int number1, int number2){
    int product = calculateNumbers(number1, number2);
    int user_answer = userAnswer();
    while(product != user_answer){
	    isZero(user_answer);    
        errorComment();
        multiplicationGame(number1, number2);
    }
	isZero(user_answer);    
	hitComment();
    startGame();
}

void stopGame(){
            printf("Thanks for playing!\n");
            exit(0);
}

void isZero(int user_answer){
    if(user_answer == 0){
        stopGame();
    }
}

void errorComment(){
    switch(srandCommentNumber()){
        case 1:
            printf("No. Try again, please. [0] - END\n");
            break;
        
        case 2:
            printf("Wrong. Try one more time. [0] - END\n");
            break;

        case 3:
            printf("Don't give up. Try again! [0] - END\n");
            break;

        case 4: 
            printf("No. Do it again. [0] - END\n");
            break;
    }
}

void hitComment(){
    switch(srandCommentNumber()){
        case 1:
            printf("Very good.\n");
            break;
        
        case 2:
            printf("Excelent.\n");
            break;

        case 3:
            printf("Good job!\n");
            break;

        case 4: 
            printf("Rigth. Keep with the good work!\n");
            break;
    }
}

