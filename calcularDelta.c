//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/*
 * Fazer um programa para ler os valores dos coeficientes A,B e C de uma equação quadrática e calcular e
 * imprimir o valor do discriminante (∆). O valor de ∆ é dado pela fórmula: ∆ = B²−4AC.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler três valores reais na entrada.
 * O primeiro valor corresponde ao valor do coeficiente A,
 * o segundo, do coeficiente B e o terceiro, do coeficiente C, de uma equação do seguro grau.
 * Cada valor ocorre em uma linha diferente na entrada.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo a frase: O VALOR DE DELTA E = X, onde X é o valor
 * de delta computado pelo seu programa e deve conter no máximo 2 casas decimais.
 * Após o valor de delta, o programa deve imprimir um caractere de quebra de linha: "\n".
 **/

int main() {

    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    printf("O VALOR DE DELTA E = %.2lf\n", b*b - 4*a*c);
}