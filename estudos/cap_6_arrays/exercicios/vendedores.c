// -----------------------------------------------------
// Script     : vendedores.c
// Description:
// Versio     : 0.1
// Author     : Luca Gorayeb <lucagorayeb@gmail.com>
// Date       : 07/04/2026
// Lincence   : GNU/GPL v3.0
// -----------------------------------------------------
#include <stdio.h>

void preencheArrayBidimensional(void);
void exibeTabelaDeVendas(int[], int, int);
int verificaLinhasColunasTabelaVendas(int, int);
void somaValorPorVendedor(int, int);

int main()
{
    preencheArrayBidimensional();
    return 0;
}

void preencheArrayBidimensional(void)
{
    int quaLinhas = 7;
    int quaColunas = 6;
    int vendas[quaLinhas][quaColunas];

    for (int linha = 0; linha < quaLinhas; linha++) {

        for (int coluna = 0; coluna < quaColunas; coluna++) {

            if (linha == 0 || coluna == 0 || coluna == 5 || linha == 6) {
                vendas[linha][coluna] = 0;
            } else {
                printf("Quanto o vendedor %d vendeu do produto %d ? ", coluna, linha);
                scanf("%d", &vendas[linha][coluna]);
            }
        }
    }

    exibeTabelaDeVendas(vendas, quaLinhas, quaColunas);
}

void exibeTabelaDeVendas(int vendas, int quaLinhas, int quaColunas)
{
    for (int linha = 0; linha < quaLinhas; linha++) {
        for (int coluna = 0; coluna < quaColunas; coluna++) {
            if (verificaLinhasColunasTabelaVendas(linha, coluna) != 0) {
                somaValorPorVendedor(vendas[linha][coluna], coluna);
            }
        }
        printf("\n");
    }
}

int verificaLinhasColunasTabelaVendas(int linha, int coluna)
{
    if (linha == 0 && coluna == 0) {
        printf("VENDAS\t");
        return 0;
    } else if (linha == 0 && coluna != 0) {
        printf("vendedor %d\t", coluna);
        return 0;
    } else {
        printf("produto %d\t", linha);
        return 0;
    }
    return 1;
}

// int

void somaValorPorVendedor(int numero, int linha)
{
    int static valor;
    valor += numero;

    if (linha == 6) {
        printf("%d\t", valor);
        valor = 0;
    } else {
        printf("%d\t", numero);
        ;
    }
}

/*
 4 vendedores
 5 produtos
 Os vendedores fazem um memorando de vendas por dia
      - número do vendedor
      - número do produto
      - valor das vendas

 Isso foi feito durante 30 dias e querem que seja exibida
 uma tabela. As linhas são os produtos e as colunas são os vendedores.

      [0][0]   [0][1]     [0][2]     [0][3]     [0][4]     [0][5]
[0][0]  pv       v1         v2         v3         v4       total

[1][0]  p1     [1][1]     [1][2]     [1][3]     [1][4]     [1][5]

[2][0]  p2     [2][1]     [2][2]     [2][3]     [2][4]     [2][5]

[3][0]  p3     [3][1]     [3][2]     [3][3]     [3][4]     [3][5]

[4][0]  p4     [4][1]     [4][2]     [4][3]     [4][4]     [4][5]

[5][0]  p5     [5][1]     [5][2]     [5][3]     [5][4]     [5][5]

[6][0]  total  [6][1]     [6][2]     [6][3]     [6][4]     [6][5]

 */
