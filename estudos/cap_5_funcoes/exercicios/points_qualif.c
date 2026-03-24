// -----------------------------------------------------
// Script     : points_qualif.c
// Description: 
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 05/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int pointsQualif(int);

int main() {
	int grade;

	printf("Type your grade: ");
	scanf("%d", &grade);
	printf("The level of your grade is %d.\n", pointsQualif(grade));
        return 0;
}

int pointsQualif(int grade){
	if(grade >= 80){
		if(grade < 90){
			return 3;
		}else{
			return 4;
		}
	}else{
		if(grade >= 70){
			return 2;
		}else if(grade < 60){
			return 0;
		}else{
			return 1;
		}
	}
}
