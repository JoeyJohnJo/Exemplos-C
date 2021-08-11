//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/*
 * Escreva um algoritmo par ler um valor em reais e calcular qual o menor número possível de notas de R$ 100,
 * R$ 50, R$ 10 e moedas de R$ 1 em que o valor lido pode ser decomposto.
 * O programa deve escrever a quantidade de cada nota e moeda a ser utilizada.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler uma única linha na entrada, contendo um valor em Reais.
 * Considere que somente um número inteiro seja fornecido como entrada.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir quatro frases, uma em cada linha:
 * NOTAS DE 100 = X,
 * NOTAS DE 50 = Y,
 * NOTAS DE 10 = Z,
 * MOEDAS DE 1 = W,
 * onde X, Y, Z e W correspondem às quantidades de cada nota ou moeda necessárias para corresponder
 * ao valor em Reais dado como entrada. Após cada quantidade,
 * o programa deve imprimir um caractere de quebra de linha: '\n'.
 * **/

int main() {

    int valorEmReais,
    qtd100 = 0,
    qtd50 = 0,
    qtd10 = 0,
    qtd1 = 0;

    scanf("%i", &valorEmReais);

    if (valorEmReais >= 100) {
        qtd100 = valorEmReais / 100;
        valorEmReais %= 100;
    }

    if (valorEmReais >= 50) {
        qtd50 = valorEmReais / 50;
        valorEmReais %= 50;
    }

    if (valorEmReais >= 10) {
        qtd10 = valorEmReais / 10;
        valorEmReais %= 10;
    }

    if (valorEmReais >= 1) {
        qtd1 = valorEmReais / 1;
    }

    printf("NOTAS DE 100 = %i\n", qtd100);
    printf("NOTAS DE 50 = %i\n", qtd50);
    printf("NOTAS DE 10 = %i\n", qtd10);
    printf("MOEDAS DE 1 = %i\n", qtd1);

}