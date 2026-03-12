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
void toHighOrToLow(int, int);
int wrongAnswer(void);
void numberGuessed(int);
void playGameAgain(void);
int askIfWantToPlayAgain(void);
void numberToHigh(void);
void numberToLow(void);
void guessInTen(void);
void guessLessTen(void);
void guessMoreTen(void);
//int countGuesses(void);
void countGuess(int);
void printQuantitOfTrys(int);
void checkTheQuantitOfTrys(int);

int main() {
    srand(time(NULL));
    int random_number = randomNumber();
    countGuess(random_number);
    return 0;
}

// Refatorar
int startGame(){
    int number;
    printf("I have a number betwen 1 and 1000\n");
    printf("Can you guess the number?\n");
    printf("Please, type your first try: ");
    scanf("%d", &number);
    return number;
}

// Refatorar
void countGuess(int random_number){
    int cont = 1;
    int number = startGame();
    while(number != random_number){
        toHighOrToLow(number, random_number);
        number = wrongAnswer();
        cont++;
    }
    numberGuessed(cont);
}

int randomNumber(){
    return 1 + rand() % 1000;
}

void toHighOrToLow(int number, int random_number){
    if(number > random_number){
        numberToHigh();
    }else if(number < random_number){
        numberToLow();
    }
}

// Refatorar
int wrongAnswer(){
    int number;
    printf("Type your guess: ");
    scanf("%d", &number);
    return number;
}

void numberGuessed(int cont){
        printf("Excelent! You guess the number!\n");
        printQuantitOfTrys(cont);
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

//int countGuesses(int num = 0, int cont = num + 1){
  //  return count;
//}

void printQuantitOfTrys(int cont){
    printf("%d\n", cont);
    checkTheQuantitOfTrys(cont);
}

void checkTheQuantitOfTrys(int number){
    if(number == 10){
        guessInTen();
    }else if(number < 10){
        guessLessTen();
    }else{
        guessMoreTen();
    }
}


void guessInTen(){
    printf("You know the secret!\n");
}

void guessLessTen(){
    printf("You know the secret or have a lot of luck!\n");
}

void guessMoreTen(){
    printf("You should be capable to do better!\n");
}

        
