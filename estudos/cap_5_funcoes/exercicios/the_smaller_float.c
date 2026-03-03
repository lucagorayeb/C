// -----------------------------------------------------
// Script     : the_smaller_float.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 03/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

float isSmaller(float, float, float);
float isBigger(float, float);

int main() {

	float num1, num2, num3;

	printf("Type three float numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	printf("The smallest number is %.1f\n", isSmaller(num1, num2, num3));
        return 0;
}

float isSmaller(float num1, float num2, float num3){
	float small_number;
	if(num1 > num2){
		small_number = num2;
	}else{
		small_number = num1;
	}
	return isBigger(num3, small_number);
}

float isBigger(float num1, float num2){
        if(num1 > num2){
               return num2;
        }else{
                return num1;
        }
}
