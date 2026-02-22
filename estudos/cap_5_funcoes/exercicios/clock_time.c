// -----------------------------------------------------
// Script     : clock_time.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 21/02/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

int hourInSeconds(int);

int minuteInSeconds(int);

int secondsSum(int, int, int);

int hoursDiference(int, int);

void secondsInHour(int);

int main() {
	int hour1, second1, minute1;
	char char1, char2;
	int hour2, second2, minute2;
	char char3, char4;

	printf("Insert two diferent times in the range of 1-12.\n");
	printf("Insert the times in follow order hh:mm:ss\n");

	printf("Insert the first time: ");
	scanf("%d%c%d%c%d", &hour1, &char1, &minute1, &char2, &second1);
	
	printf("Insert the second time: ");
	scanf("%d%c%d%c%d", &hour2, &char3, &minute2, &char4, &second2);
	
	int first_hour  = secondsSum(hour1, minute1, second1);
	printf("First hour passed in seconds: %d s\n", first_hour);
	
	int second_hour = secondsSum(hour2, minute2, second2);
	printf("Second hour passed in seconds: %d s\n", second_hour);

	int diference_hour_in_seconds =  hoursDiference(first_hour, second_hour);
	printf("The diference between this two hours is ");
	secondsInHour(diference_hour_in_seconds);

        return 0;
}

int hourInSeconds(int hour){
	return hour * 3600;
}

int minuteInSeconds(int minutes){
	return minutes * 60;
}

int secondsSum(int hour, int minutes, int seconds){
	return hourInSeconds(hour) + minuteInSeconds(minutes) + seconds;
}

int hoursDiference(int first_hour, int second_hour){
	if(second_hour >= first_hour){
		return second_hour - first_hour;
	}else{
		return first_hour - second_hour;
	}	
}

void secondsInHour(int seconds){
	int hour = seconds / 3600;
	int minute = (seconds - (hour * 3600)) / 60;
        seconds = seconds - ((hour * 3600) + (minute * 60));
	
	printf("%d:%d:%d\n", hour, minute, seconds);
}
