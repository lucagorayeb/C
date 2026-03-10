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

int main() {
    srand(time(NULL));
    
    int number;

    printf("I have a number betwen 1 and 1000\n");
    printf("Can you guess the number?\n");
    printf("Please, type your first try: ");
    scanf("%d", &number);
    
    return 0;
}

int randomNumber(){
    return 1 + rand() % 1000;
}

char isCorrect(int number, int random_number){
    if(number > random_number){
        return "To higher. Try again.";
    }else if(number < random_number){
        return "To low, Try again.";
    }else{
        return "Excelent! You guess the number! Would you like to try again?"
    }
}

