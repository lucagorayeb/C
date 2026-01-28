#include <stdio.h> 


int main() {
// Exemplo de if
	if ( 9 != 0 ){
		printf("Nove é diferente de zero\n");
	} 	    

// Exemplo de if else
	if ( 9 >= 0 ){
		printf("Nove é maior que zero\n");
	}else{
		printf("Nove não é maior que zero\n");
	}

// Exemplo de if else com operador ternário
	printf("%s\n", 9 >= 0 ? "Nove é maior que zero\n" : "Nove eh \
menor que zero\n");

	return 0; 
}
