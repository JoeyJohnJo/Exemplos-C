//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Escreva um programa para ler um número de três dígitos e imprimir o número invertido
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada contém apenas um número com três dígitos.
 * Esse número é diferente de zero e não é múltiplo de 10 ou 100.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * A saída deve conter apenas uma linha com o número correspondente ao valor da entrada, com seus dígitos invertidos.
 * Logo após o número, deve ser impresso o caractere de quebra de linha: '\n'.
 **/

int main() {

    int numeroInicial, numeroInvertido, digito1, digito2, digito3;

    scanf("%i", &numeroInicial);

    digito1 = numeroInicial / 100;
    digito2 = (numeroInicial / 10) % 10;
    digito3 = numeroInicial - (digito1 * 100 + digito2 * 10);

    numeroInvertido = (digito3 * 100) + (digito2 * 10) + digito1;

    printf("%i\n", numeroInvertido);
}