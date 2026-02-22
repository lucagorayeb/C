// -----------------------------------------------------
// Script     : celsius.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 22/02/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

float celcius(float);
void tabela_celcius(void);

int main() {
	tabela_celcius();
        return 0;
}


void tabela_celcius(){
	for(int contador = 32; contador <= 212; contador++){
		if(contador == 32){
			printf("+--------------------------------------+\n");
			printf("|  TABELA DE FAHRENHEIT PARA CELSIUS   |\n");
			printf("+--------------------------------------+\n");
			printf("|     FAHRENHEIT     |     CELSIUS     |\n");
			printf("+--------------------------------------+\n");
		}
		
		float temp_celcius = celcius(contador);	
		
		if(temp_celcius <= 9.9){

			printf("|        %d F°       |      %.1f C°     |\n", contador, temp_celcius);
			printf("+--------------------------------------+\n");

		}else if(temp_celcius >= 37.7 && temp_celcius < 100){

			printf("|        %d F°      |      %.1f C°    |\n", contador, temp_celcius);
			printf("+--------------------------------------+\n");
		
		}else if(temp_celcius >= 100){
			printf("|        %d F°      |      %.1f C°   |\n", contador, temp_celcius);
                        printf("+--------------------------------------+\n");
		}else{
			printf("|        %d F°       |      %.1f C°    |\n", contador, temp_celcius);
			printf("+--------------------------------------+\n");
			
		}
		
	
	}
}

float celcius(float fahrenheit){
        return (5 * (fahrenheit  - 32)) / 9;
}

