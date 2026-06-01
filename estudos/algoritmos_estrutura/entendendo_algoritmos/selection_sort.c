#include <stdio.h>
#include <string.h>
int main(){

}

int encontra_menor(int *array){
	int menor = array[0];
	int menor_indice = 0;

	for(int i = 0; i < strlen(array); i++){
		if(array[i] < menor){
			menor = array[i];
			menor_indice = i;
		}
		return menor_indice;
	}
}
