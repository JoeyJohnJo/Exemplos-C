//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/**
 * Sabendo-se que 100 kW de energia custam 70% do salário mínimo, escreva um algoritmo em Linguagem C
 * que leia o valor do salário mínimo e a quantidade de kW gasta por uma residência. Calcule e imprima:
 * • o valor em reais de cada kW;
 * • o valor em reais a ser pago pelo consumo da residência;
 * • o novo valor a ser pago pela residência com um desconto de 10%.
 * ---------------------------------------------- ENTRADA --------------------------------------------------------------
 * O programa deve ler o valor do salário mínimo e a quantidade de kW gasta por uma residência. Ambos
 * os valores são reais.
 * ----------------------------------------------- SAÍDA ---------------------------------------------------------------
 * O programa deve imprimir três linhas contendo o texto:
 * Custo por kW: R$ x.xx
 * Custo do consumo: R$ x.xx
 * Custo com desconto: R$ x.xx
 * */

int main() {

    double salarioMinimo,
           kwGastosPorResidencia,
           custoPorKw,
           custoConsumo;

    scanf("%lf%lf", &salarioMinimo, &kwGastosPorResidencia);

    custoPorKw = salarioMinimo * 0.007;
    custoConsumo = custoPorKw * kwGastosPorResidencia;

    printf("Custo por kW: R$ %.2lf\n", custoPorKw);
    printf("Custo do consumo: R$ %.2lf\n", custoConsumo);
    printf("Custo com desconto: R$ %.2lf\n", custoConsumo * 0.9);

}