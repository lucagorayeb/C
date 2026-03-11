// -----------------------------------------------------
// Script   : guess_number.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 10/03/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int randomNumber(void);
void isCorrect(int, int);
void wrongAnswer(int);
void numberGuessed(void);
void playGameAgain(void);
int askIfWantToPlayAgain(void);
void numberToHigh(void);
void numberToLow(void);

int main() {
    srand(time(NULL));
    
    int number, random_number = randomNumber();

    printf("I have a number betwen 1 and 1000\n");
    printf("Can you guess the number?\n");
    printf("Please, type your first try: ");
    scanf("%d", &number);
    isCorrect(number, random_number);
    return 0;
}

int randomNumber(){
    return 1 + rand() % 1000;
}

void isCorrect(int number, int random_number){
    if(number > random_number){
        numberToHigh();
        wrongAnswer(random_number);
    }else if(number < random_number){
        numberToLow();
        wrongAnswer(random_number);
    }else if(number == random_number){
        numberGuessed();
    }
}

void wrongAnswer(int random_number){
    int number;
    printf("Type your guess: ");
    scanf("%d", &number);
    isCorrect(number, random_number);
}

void numberGuessed(){
        printf("Excelent! You guess the number!\n");
        playGameAgain();
}

void playGameAgain(){
    if(askIfWantToPlayAgain() == 1){
        main();
    }else{
        printf("Thanks for playing!\n");
    }
}

int askIfWantToPlayAgain(){
        int answer;
        printf("Would you like to try again? [S-1/N-2] ");
        scanf("%d", &answer);
        return answer;
}

void numberToHigh(){
        printf("To higher. Try again.\n");
}

void numberToLow(){
        printf("To low, Try again.\n");
}


