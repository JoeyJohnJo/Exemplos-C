//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/*
 * Desenvolver um algoritmo para ler os comprimentos dos tres lados de um triangulo (L1, L2 e L3) e
 * calcular a area do triangulo.
 * A area de um triangulo pode ser computada pela formula: A = √(T * (T −L1) * (T −L2) * (T −L3))
 * onde T = (L1 + L2 + L3) / 2
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler tres valores reais na entrada, cada um correspondendo ao comprimento de um lado
 * do triangulo. Cada valor ocorre em uma linha diferente na entrada.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo a frase: A AREA DO TRIANGULO E = X, onde X e o
 * valor da area do triangulo e deve conter no máximo 2 casas decimais. Apos o valor da area do triangulo, o
 * programa deve imprimir um caractere de quebra de linha: '\n'.
 * **/

int main() {

    double l1, l2, l3, area, t; // Os 3 lados do triangulo, area e T

    scanf("%lf%lf%lf", &l1, &l2, &l3);

    t = (l1 + l2 + l3) / 2.0;
    double temp = t * (t - l1) * (t - l2) * (t - l3);
    area = sqrt(temp);

    printf("A AREA DO TRIANGULO E = %.2lf\n", area);
}