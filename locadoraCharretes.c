//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Uma locadora de charretes cobra R$ 10,00 de taxa para cada 3 horas de uso de uma charrete
 * e R$5,00 para cada 1 hora abaixo dessas 3 horas.
 * Fazer um programa que leia a quantidade de horas que a charrete foi usada e
 * que calcule e escreva quanto o cliente tem de pagar.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler uma única linha na entrada,
 * contendo o número de horas que o locatário utilizou a charrete
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo a frase:
 * O VALOR A PAGAR E = X,
 * onde X é o valor do aluguel e deve conter no máximo 2 casas decimais.
 * Após o valor do aluguel o programa deve imprimir um caractere de quebra de linha: ‘\n’.
 * * **/

int main() {

    int horas;
    double valor;

    scanf("%i", &horas);

    valor = 10 * (horas / 3);
    valor += 5 * (horas % 3);

    printf("O VALOR A PAGAR E = %.2lf\n", valor);

}