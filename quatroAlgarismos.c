//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Dado um número inteiro de três algarismos, construir outro número inteiro de quatro algarismos de
 * acordo com a seguinte regra:
 * os três primeiros algarismos, contados da esquerda para a direita são iguais ao número dado.
 * O quarto algarismo é um digito de controle calculado da seguinte forma:
 * primeiro algarismo + segundo algarismo×3 + terceiro algarismo×5.
 * O dígito de controle é igual ao resto da divisão dessa soma por 7.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler uma linha de dados contendo apenas um número com três algarismos
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo a frase: O NOVO NUMERO E = X, onde X é o novo
 * número inteiro com quatro algarismos, seguido por um caractere de quebra de linha: '\n'.
 **/

int main() {

    int numeroInicial, novoNumero, digito1, digito2, digito3, digitoControle;

    scanf("%i", &numeroInicial);

    digito1 = numeroInicial / 100;
    digito2 = (numeroInicial / 10) % 10;
    digito3 = numeroInicial - (digito1 * 100 + digito2 * 10);
    digitoControle = (digito1 + (digito2 * 3) + (digito3 * 5)) % 7;

    novoNumero = (digito1 * 1000) + (digito2 * 100) + (digito3 * 10) + digitoControle;

    printf("O NOVO NUMERO E = %i\n", novoNumero);
}