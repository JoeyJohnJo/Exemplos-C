//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/*
 * Dado um sistema de equações lineares do tipo:
 * ax + by = c
 * dx + ey = f
 * Escreva um programa para ler os valores dos coeficientes: a, b, c, d, e e f e calcular os valores de x e y.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler os valores de a, b, c, d, e, f nesta ordem, um valor por linha.
 * Os valores são números reais (double)
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo a frase:
 * O VALOR DE X E = z, onde z é o valor da variável x, escrito com duas casas decimais.
 * O programa deve imprimir uma segunda linha contendo a frase:
 * O VALOR DE Y E = w, onde w corresponde ao valor da variável y escrito com duas casas decimais.
 * Ao final da segunda linha o programa deve imprimir um caractere de quebra de linha: '\n'.
 * **/

int main() {

    double a, b, c, d, e, f, x, y, determinante;

    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);

    // Resolva a equacao utilizando a Regra de Cramer (matrizes)
    // | a b |
    // | d e |
    determinante = a * e - b * d;
    x = (c * e - b * f) / determinante;
    y = (a * f - c * d) / determinante;
    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E  = %.2lf\n", y);
}