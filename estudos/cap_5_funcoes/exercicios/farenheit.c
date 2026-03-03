// -----------------------------------------------------
// Script     : farenheit.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 22/02/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

float celcius(float);
void tabela_farenheit(void);

int main() {
	tabela_farenheit();
        return 0;
}


void tabela_farenheit(){
	for(int contador = 0; contador <= 100; contador++){
		if(contador == 0){
			printf("+--------------------------------------+\n");
			printf("|  TABELA DE FAHRENHEIT PARA CELSIUS   |\n");
			printf("+--------------------------------------+\n");
			printf("|     FAHRENHEIT     |     CELSIUS     |\n");
			printf("+--------------------------------------+\n");
		}
		
		float temp_celcius = celcius(contador);	
		
		if(temp_celcius <= 9.9){

			printf("|        %d C°       |      %.1f F°     |\n", contador, temp_celcius);
			printf("+--------------------------------------+\n");

		}else if(temp_celcius >= 37.7 && temp_celcius < 100){

			printf("|        %d C°      |      %.1f F°    |\n", contador, temp_celcius);
			printf("+--------------------------------------+\n");
		
		}else if(temp_celcius >= 100){
			printf("|        %d C°      |      %.1f F°   |\n", contador, temp_celcius);
                        printf("+--------------------------------------+\n");
		}else{
			printf("|        %d C°       |      %.1f F°    |\n", contador, temp_celcius);
			printf("+--------------------------------------+\n");
			
		}
		
	
	}
}

float celcius(float celcius){
        return (9 * (celcius  + 32)) / 5;
}

