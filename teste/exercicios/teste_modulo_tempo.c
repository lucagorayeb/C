// -----------------------------------------------------
// Script     :
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 21/02/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int main() {
	int seconds = 9410;
	int hour = seconds / 3600;
	int minute = (seconds - (hour * 3600)) / 60; 
	seconds = seconds - ((hour * 3600) + (minute * 60)); 
	 
	printf("%d\n", hour);
	printf("%d\n", minute);
	printf("%d\n", seconds);
        return 0;
}
