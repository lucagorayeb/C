// -----------------------------------------------------
// Script   : recebe_inteiro_e_retorna_separado.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 21/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void checkNumberSize(int);
void showOneDigitNumberSplit(int);
void showTwoDigitNumberSplit(int);
void showThreeDigitNumberSplit(int);
void showFourDigitNumberSplit(int);
void showFiveDigitNumberSplit(int);

int main() {
	int number;

	printf("Type a number [1 - 32767]: ");
	scanf("%d", &number);
	
	checkNumberSize(number);

        return 0;
}

void checkNumberSize(int number){
	if(number <= 9){
		showOneDigitNumberSplit(number);
	}else if(number > 9 && number <= 99){
		showTwoDigitNumberSplit(number);
	}else if(number > 99 && number <= 999){
		showThreeDigitNumberSplit(number);
	}else if(number > 999 && number <= 9999){
		showFourDigitNumberSplit(number);
	}else if(number > 9999 && number <= 32767){
		showFiveDigitNumberSplit(number);
	}else{
		printf("Number out of range\n");
	}
}

void showOneDigitNumberSplit(int number){
	printf("%d\n", number);	
}

void showTwoDigitNumberSplit(int number){
	int num2 = number % 10;
	int num1 = ((number % 100) - num2) / 10; 
	printf("%d  %d\n", num1, num2);
}

void showThreeDigitNumberSplit(int number){
	int num3 = number % 10; 
	int num2 = ((number % 100) - num3) / 10; 
	int num1 = (((number % 1000) - num2) - num3) / 100; 
	printf("%d  %d  %d\n", num1, num2, num3);

}

void showFourDigitNumberSplit(int number){
	int num4 = number % 10; 
	int num3 = ((number % 100) - num4) / 10; 
	int num2 = (((number % 1000) - num3) - num4) / 100; 
	int num1 = ((((number % 10000) - num2) - num3) - num4) / 1000; 
	printf("%d  %d  %d  %d\n", num1, num2, num3, num4);

}

void showFiveDigitNumberSplit(int number){
	int num5 = number % 10; 
	int num4 = ((number % 100) - num5) / 10; 
	int num3 = (((number % 1000) - num4) - num5) / 100; 
	int num2 = ((((number % 10000) - num3) - num4) - num5) / 1000; 
	int num1 = (((((number % 100000) - num2) - num3) - num4) - num5) / 10000; 
	printf("%d  %d  %d  %d  %d\n", num1, num2, num3, num4, num5);

}
