//
// Created by joeyjohnjo on 24/08/2021.
//

#include <stdio.h>
#include <math.h>

/**
 * Desenvolver um programa que leia os coeficientes (a, b e c) de uma equação de segundo grau
 * e calcule as raízes da equação.
 * O programa deve mostrar a classificação das raízes, e, quando possível, o valor das
 * raízes calculadas.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler três valores double na entrada.
 * O primeiro valor corresponde ao valor do coeficiente a,
 * o segundo, do coeficiente b e o terceiro, do coeficiente c, de uma equação de segundo grau.
 * Os três valores ocorrem em uma única linha na entrada, separados entre si por um espaço.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo uma das seguintes frases,
 * conforme for o resultado do cálculo das raízes da equação:
 * RAIZES DISTINTAS, ou RAIZ UNICA, ou RAIZES IMAGINARIAS.
 * No primeiro caso o programa deve imprimir uma outra linha contendo a frase X1 = x1,
 * onde x1 é o valor da MENOR raiz encontrada para a equação.
 * Ainda no primeiro caso, o programa deve imprimir uma terceira linha com a frase X2 = x2,
 * onde x2 corresponde ao valor da segunda raiz.
 * No segundo caso, o programa deve imprimir uma frase X1 = x1,
 * onde x1 é o valor da única raiz da equação.
 * No terceiro caso, o programa deve imprimir RAIZES IMAGINARIAS.
 * Os valores das raízes, quando existirem, devem ser impressos com duas casas decimais.
 **/

int main() {

    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b)-(4*a*c);

    if (delta < 0) {
        printf("RAIZES IMAGINARIAS\n");
        return 0;
    }

    double x = (-b-sqrt(delta)) / (a*2);

    if (delta == 0) {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x);
        return 0;
    }

    if (delta > 0 ) {
        double x2 = (-b+sqrt(delta)) / (a*2);
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", (x < x2 ? x : x2));
        printf("X2 = %.2lf\n", (x > x2 ? x : x2));
    }
}