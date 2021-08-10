//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/*
 * Muitos países estão passando a utilizar o sistema métrico.
 *  Faça um programa para executar as seguintes conversões:
 * • Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius (C = 5(F−32) / 9).
 * • Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25.4 mm).
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler dois valores na entrada: um valor em Fahrenheit e outro valor em polegadas.
 * Ambos os valores são do tipo double. Cada valor ocorre em uma linha diferente na entrada.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir duas linhas.
 * A primeira contém a frase: O VALOR EM CELSIUS = X,
 * onde X é o valor de temperatura convertido de Fahrenheit para Celsius e deve ter duas casas decimais.
 * A segunda linha deve conter a frase: A QUANTIDADE DE CHUVA E = Y,
 * onde Y é o valor em milímetros correspondente ao valor em polegadas dado como entrada.
 * Y é um valor real (double) e deve ter duas casas decimais.
 * Logo após o valor de Y, o programa deve imprimir o caractere de quebra de linha ‘\n’.
 **/

int main() {

    double tempF,
           tempC,
           chuvaPol,
           chuvaMm;

    scanf("%lf%lf", &tempF, &chuvaPol);

    tempC = 5 * (tempF - 32) / 9;
    chuvaMm = 25.4 * chuvaPol;

    printf("O VALOR EM CELSIUS = %.2lf\n", tempC);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", chuvaMm);
}