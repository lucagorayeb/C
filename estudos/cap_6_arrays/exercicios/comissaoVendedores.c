// -----------------------------------------------------
// Script     : comissaoVendedores.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 29/03/2026
// Lincence   : GNU/GPL v3.0
// ----------------------------------------------------- 
#include <stdio.h> 
#define TAMANHO 9

int quantidadeComissaoPorFaixa(int [], int);
void listarQuantidadeComissaoPorFaixa(int [], int);

int main() {
        int quantidadeComissoes[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        quantidadeComissoes[TAMANHO] = quantidadeComissaoPorFaixa(quantidadeComissoes, 392);

        listarQuantidadeComissaoPorFaixa(quantidadeComissoes, TAMANHO);
        return 0;
}

int quantidadeComissaoPorFaixa(int quantidadeComissoes[], int faixaComissao){

        if(faixaComissao >= 200 && faixaComissao <= 299){
                return quantidadeComissoes[0] += 1;
        }

        if(faixaComissao >= 300 && faixaComissao <= 399){
                return quantidadeComissoes[1] += 1;
        }

        if(faixaComissao >= 400 && faixaComissao <= 499){
                return quantidadeComissoes[2] += 1;
        }

        if(faixaComissao >= 500 && faixaComissao <= 599){
                return quantidadeComissoes[3] += 1;
        }

        if(faixaComissao >= 600 && faixaComissao <= 699){
                return quantidadeComissoes[4] += 1;
        }

        if(faixaComissao >= 700 && faixaComissao <= 799){
                return quantidadeComissoes[5] += 1;
        }

        if(faixaComissao >= 800 && faixaComissao <= 899){
                return quantidadeComissoes[6] += 1;
        }

        if(faixaComissao >= 900 && faixaComissao <= 999){
                return quantidadeComissoes[7] += 1;
        }

        if(faixaComissao >= 1000){
                return quantidadeComissoes[8] += 1;
        }
}

void listarQuantidadeComissaoPorFaixa(int array[], int tamanho){
        printf("A quantidade de comissão por faixa foi:\n");
        for(int c = 0; c < tamanho; c++){
                printf("%d - %d\n", c, array[c]);
        }
}
