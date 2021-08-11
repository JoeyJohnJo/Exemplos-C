//
// Created by joeyjohnjo on 10/08/2021.
//

#include <stdio.h>

/*
 * O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
 * e dos impostos (aplicados ao custo de fábrica). Supondo que a porcentagem do distribuidor seja de x% do
 * preço de fábrica e os impostos de y% do preço de fábrica, fazer um programa para ler o custo de fábrica
 * de um carro, a percentagem do distribuidor e o percentual de impostos, calcular e imprimir o custo final do
 * carro ao consumidor.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler três valores na entrada: o preço de fábrica do carro, o percentual do distribuidor
 * e o percentual de impostos. Cada valor aparece em uma linha de entrada. Todos os valores são do tipo double.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha, contento a frase O VALOR DO CARRO E = Z, onde Z é o valor
 * do preço final do carro ao consumidor. O valor de Z deve ter duas casas decimais. Após imprimir o valor
 * do preço final, o programa deve imprimir o caractere de quebra de linha '\n'.
 * */

int main() {

    double custoFabrica, pctDistribuidor, pctImpostos, custoConsumidor;

    scanf("%lf%lf%lf", &custoFabrica, &pctDistribuidor, &pctImpostos);

    custoConsumidor = custoFabrica + (custoFabrica / 100 * pctDistribuidor) + (custoFabrica / 100 * pctImpostos);

    printf("O VALOR DO CARRO E = %.2lf\n", custoConsumidor);

}