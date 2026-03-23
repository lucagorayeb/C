// -----------------------------------------------------
// Script   : fibonaci.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 13/03/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

void fibonaci(int);
double calculateFibonaci(double, double);
void printFibonaciNumbers(int);

int main() {
        int number_cases;
        printf("Choose te number of cases? ");
        scanf("%d", &number_cases);
        printf("0\n1\n");
        fibonaci(number_cases);
        return 0;
}

void fibonaci(int number_cases){
    
    const int FIBONACI_ITERATOR = number_cases - 2;
    const int ZERO_NUMBER = 0;
    const int ONE_NUMBER = 1;

    int num1 = ZERO_NUMBER, num2 = ONE_NUMBER, i = ZERO_NUMBER, j = ZERO_NUMBER;
    
    while(i < FIBONACI_ITERATOR){
        
        num1 = calculateFibonaci(num1,num2);
        printFibonaciNumbers(num1);
        
        while(j < i){
        
            num2 = calculateFibonaci(num1,num2);
            printFibonaciNumbers(num2);
            j++;
        
        }
        i++;
    }

}

double calculateFibonaci(double first_number, double second_number){
    return first_number + second_number;
}

void printFibonaciNumbers(int number){
    printf("%d\n", number);
}
