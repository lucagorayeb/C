// -----------------------------------------------------
// Script   : Lancamento_de_dado_de_seis_faces.c
// Descrição: Sorteia um número de um a seis que representa
// 	      o lançamento de um dado.
// Versão   : 0.1
// Autor    : Luca Gorayeb <lucagorayeb@gmail.com>
// Data     : 12/02/2026
// Lincença : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#include <stdlib.h>

int main() {
	int face, jogada, frequencia1 = 0, frequencia2 = 0;
	int frequencia3 = 0, frequencia4 = 0, frequencia5 = 0;
	int frequencia6 = 0;

	for(jogada = 1; jogada <= 6000; jogada++){

		face = 1 + rand() % 6;

		switch(face){
			case 1:
				++frequencia1;
				break;
			case 2:
				frequencia2++;
                                break;
			case 3:
                                frequencia3++;
                                break;
			case 4:
                                frequencia4++;
                                break;
			case 5:
                                frequencia5++;
                                break;
			case 6:
                                frequencia6++;
                                break;
		}
	}
	printf("Face    Freqüência\n");
	printf("1       %d\n", frequencia1);
	printf("2       %d\n", frequencia2);
	printf("3       %d\n", frequencia3);
	printf("4       %d\n", frequencia4);
	printf("5       %d\n", frequencia5);
	printf("6       %d\n", frequencia6);
        
	return 0;
}
