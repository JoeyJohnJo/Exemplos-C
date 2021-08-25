//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/**
 * Escreva um algoritmo que leia 4 números reais (double) em qualquer ordem
 * e os apresente de forma ordenada na tela.
 *
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler 4 valores reais.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contento a lista ordenada de números
 * separados por vírgula e espaço, cada número com 2 casas decimais.
 * * **/

void trocarNumeros(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;

}

int main() {

    double numeros[4];

    scanf("%lf%lf%lf%lf", &numeros[0], &numeros[1], &numeros[2], &numeros[3]);

    while (numeros[0] > numeros[1] || numeros[1] > numeros[2] || numeros[2] > numeros[3]) {
        if (numeros[0] > numeros[1]) {
            trocarNumeros(&numeros[0], &numeros[1]);
        }
        if (numeros[1] > numeros[2]) {
            trocarNumeros(&numeros[1], &numeros[2]);
        }
        if (numeros[2] > numeros[3]) {
            trocarNumeros(&numeros[2], &numeros[3]);
        }

    }
    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", numeros[0], numeros[1], numeros[2], numeros[3]);

}