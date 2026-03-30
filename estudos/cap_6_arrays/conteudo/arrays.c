// -----------------------------------------------------
// Script     :
// Description:
// Version    : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 27/03/2026
// License    : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#define TAMANHO 10
#define TAMANHO_RESPOSTAS 43
#define TAMANHO_FREQUENCIA 11
#define SEGUNDO_TAMANHO 5

void declarandoArray1(void);
void declarandoArray2(void);
void declarandoArrayComDefine(void);
void somandoElementosArray(void);
void votacaoEstudantilArray(void);
void imprimirHistograma(void);
void tratandoArrayDeCaracteresComoString(void);
void mainArrayStaticoAutomatico(void);
void staticArrayInit(void);
void automaticArrayInit(void);
void enderecoArray(void);
void mainModificaArrayIAndlementoArray(void);
void modificaArray(int[], int);
void modificaElementoArray(int);
void mainTentaModificarArray(void);
void tentaModificarArray(const int []);

int main() {
        //declarandoArray1();
        //declarandoArray2();
        //declarandoArrayComDefine();
        //somandoArrayComDefine();
        //votacaoEstudantilArray();
        //imprimirHistograma();
        //tratandoArrayDeCaracteresComoString();
        //mainArrayStaticoAutomatico();
        //enderecoArray();
        //mainModificaArrayIAndlementoArray();
        mainTentaModificarArray();
        return 0;
}

void declarandoArray1(void){
       // Declaração de arrays
        int b[100], x[27], n[10];

        for(int i = 0; i <= 9; i++){
                n[i] = 0;
        }

        printf("%s%13s\n", "Elemento", "Valor");
        for(int i = 0; i <= 9; i++){
                printf("%7d%13d\n", i, n[i]);
        }
}

void declarandoArray2(void){
        // Declaração de arrays
        int i, n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
        printf("%s%13s\n", "Elemento", "Valor");
        for(int i = 0; i <= 9; i++){
                printf("%7d%13d\n", i, n[i]);
        }
}

void declarandoArrayComDefine(void){
        // O define é uma diretiva do c que é interpretada
        // pelo pré-processador. Não possui escopo, por isso
        // não deve ser usada dentro de funções. É usado para
        // constantes globais simples, macros condicionais e
        // pequenas macros matemáticas.

        // Pré-processador não entende o C. Ele apenas
        // manipula um texto.

        int s[TAMANHO], j;

        for(j = 0; j <= 9; j++){
                s[j] = 2 + 2 * j;
        }

        printf("%s%13s\n", "Elemento", "Valor");

        for(j = 0; j <= 9; j++){
                printf("%8d%13d\n", j, s[j]);
        }
}

void somandoElementosArray(void){
        int a[TAMANHO] = {83,23,54,67,12,73,46,75,14,39}, i, total = 0;

        for(i = 0; i < TAMANHO; i++){
                total += a[i];
        }
        printf("%d\n", total);
}


void votacaoEstudantilArray(void){
        /*
        Um array é informado com as notas dos alunos, e um novo array
        é criado contado a quantidade de notas que foram dadas, notas
        entre 1 e 10.
        */

        int opiniao, nivel;

        int respostas[TAMANHO_RESPOSTAS] = {1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10};

        int frequencia[TAMANHO_FREQUENCIA] = {0};

        for(opiniao = 0; opiniao <= TAMANHO_FREQUENCIA - 1; opiniao++){
                ++frequencia[respostas[opiniao]];
        }

        printf("%s%17s\n", "Nivel", "Frequencia");

        for (nivel = 1; nivel <= TAMANHO_FREQUENCIA - 1; nivel++){
                        printf("%5d%17d\n", nivel, frequencia[nivel]);
        }
}

void imprimirHistograma(void){
        int n[TAMANHO] = {19,3,15,7,11,9,13,5,17,1};
        int i, j;

        printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");

        for(i = 0; i < TAMANHO -1; i++){
                printf("%8d%13d ", i, n[i]);

                for(j = 0; j < n[i]; j++){
                        printf("%c", '*');
                }

                printf("\n");
        }
}

void tratandoArrayDeCaracteresComoString(void){
        char string1[20], string2[] = "string literal";

        int i;

        printf("Entre com uma string: ");
        scanf("%s", string1);

        printf("string 1 eh: %s\nstring 2 eh: %s\n", string1, string2);
        printf("string1 como espaço entre caracteres eh: \n");

        for(i = 0; string1[i] != '\0'; i++){
                printf("%c", string1[i]);
        }
        printf("\n");
}

// As próximas 3 funções formam um conjunto para estudar
// arrays staticos.
// mainArrayStaticoAutomatico()
// staticArrayInit()
// automaticArrayInit()

void mainArrayStaticoAutomatico(void){
        printf("Primeira chamada de cada função:\n");
        staticArrayInit();
        automaticArrayInit();

        printf("\n\nSegunda chamada de cada função:\n");
        staticArrayInit();
        automaticArrayInit();
}

void staticArrayInit(void){
        /*
        A palavra reservada static dentro da função
        significa que a varivel declarada naquela função
        vai ser iniciada apenas na primeira chamada da função
        mas vai continuar com o seu valor armazenado durante
        outras chamadas até o fim do programa.

        Quando uma variavel recebe o static e a mesma é de
        escopo global ela tem mais uma caracteristica que
        é a de que não pode ser usada por outros arquivos .c
        e o mesmo vale para as funções declaradas com a
        palavra static.
        */

        static int a[3];
        int i;

        printf("\nValores de staticArrayInit ao entrar:\n");

        for(i = 0; i <= 2; i++){
                printf("array1[%d] = %d", i, a[i]);
        }

        printf("\nValores de staticArrayInit ao sair:\n");

        for(i = 0; i <= 2; i++){
                printf("array1[%d] = %d", i, a[i] += 5);
        }
}

void automaticArrayInit(void){
        int a[3] = {1, 2, 3};
        int i;

        printf("\nValores de automaticArrayInit ao entrar:\n");

        for(i = 0; i <= 2; i++){
                printf("array1[%d] = %d", i, a[i]);
        }

        printf("\nValores de automaticArrayInit ao sair:\n");

        for(i = 0; i <= 2; i++){
                printf("array1[%d] = %d", i, a[i] += 5);
        }
}

void enderecoArray(void){
        // O nome de um array tem o mesmo endereço que seu primeiro
        // elemento.
        char array[5];
        printf("array = %p\n&array[0] = %p\n", array, &array[0]);
}


// As proximas 3 funções vão tratar de como os arrays são
// modificados e como os elementos do array são modificados.
// mainModificaArrayIAndlementoArray();
// modificaArray();
// modificaElementoArray()

void mainModificaArrayIAndlementoArray(void){
        int a[SEGUNDO_TAMANHO] = {0, 1, 2, 3, 4};
        int i;

        printf("Efeitos de passar o array inteiro pro meio ");
        printf("de chamadas por referência: \n\n Os valores do ");
        printf("array original sao:\n");

        for(i = 0; i < SEGUNDO_TAMANHO - 1; i++){
                printf("%3d", a[i]);
        }
        printf("\n");

        // Array é passado por chamada por referência
        modificaArray(a, SEGUNDO_TAMANHO);

        printf("Os valores do array modificado são:\n");

        for(i = 0; i <= SEGUNDO_TAMANHO - 1; i++){
                printf("%3d", a[i]);
        }

        printf("\n\nEfeitos de passar elementos do array por meio ");
        printf("de uma chamada pro valor:\n\nO valor de a[3] eh %d\n", a[3]);

        modificaElementoArray(a[3]);

        printf("O valor de a[3] eh %d\n", a[3]);
}

void modificaArray(int b[], int tamanho){
        int j;
        for(j = 0; j <= tamanho - 1; j++){
                b[j] *= 2;
        }
}

void modificaElementoArray(int e){
        printf("Valor em modificaElementoArray eh %d\n", e *= 2);
}

// As duas proxima funções explicam a tentativa de modificar
// um array declarado como constante.
// mainTentaModificarArray()
// tentaModificarArray()

void mainTentaModificarArray(void){
        int a[] = {10, 20, 30};
        tentaModificarArray(a);
        printf("%d %d %d", a[0], a[1], a[2]);
}

void tentaModificarArray(const int b[]){
        b[0] += 2; // Erro
        b[1] += 2; // Erro
        b[2] += 2; // Erro
}
