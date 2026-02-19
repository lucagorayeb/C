// -----------------------------------------------------
// Script   : valor_estacionamento.c
// Descrição:
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 18/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 

float verificaTempoEstacionado(float);
float calculaTaxa(float);
int main() {
	float estacionado_car1, estacionado_car2, estacionado_car3;
       	float taxa_car1, taxa_car2, taxa_car3;
	float hora_total = 0, taxa_total = 0;
	
	printf("Quanto tempo o carro 1 ficou estacionado? ");
	scanf("%f", &estacionado_car1);
	taxa_car1 = verificaTempoEstacionado(estacionado_car1);

        printf("Quanto tempo o carro 2 ficou estacionado? ");
        scanf("%f", &estacionado_car2);
        taxa_car2 = verificaTempoEstacionado(estacionado_car2);

        printf("Quanto tempo o carro 3 ficou estacionado? ");
        scanf("%f", &estacionado_car3);
        taxa_car3 = verificaTempoEstacionado(estacionado_car3);
	
	hora_total =estacionado_car1+estacionado_car2+estacionado_car3;
	taxa_total = taxa_car1 + taxa_car2 + taxa_car3;

	printf("Carro\tHoras\tTaxa\n");
	printf("1    \t %.1f  \t %.2f\n", estacionado_car1, taxa_car1);
	printf("2    \t %.1f  \t %.2f\n", estacionado_car2, taxa_car2);
	printf("3    \t %.1f  \t %.2f\n", estacionado_car3, taxa_car3);
	printf("Total\t %.1f  \t %.2f\n", hora_total, taxa_total);
        return 0;
}

float verificaTempoEstacionado(float horas_estacionadas){
	if(horas_estacionadas <= 3.0){
		return 2.0;
	}else if(horas_estacionadas == 24.0){
		return 10.0;
	}else{
		return calculaTaxa(horas_estacionadas);
	}
}

float calculaTaxa(float horas_estacionadas){
	float horas_extras = horas_estacionadas - 3;
	return (horas_extras * 0.5) + 2;
}

