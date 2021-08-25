//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

void trocarNumeros(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

/**
 * Você receberá três valores inteiros e deve descobrir quais deles correspondem
 * às variáveis a, b e c.
 * Os números não serão dados em ordem exata, mas sabemos que o
 * valor correspondente a a é menor do que o valor correspondente a b, e que o valor
 * correspondente a b é menor do que o correspondente a c .
 * Será informada a você a ordem em que os valores associados a cada variável devem ser impressos.
 * Escreva um programa que imprima os valores na ordem requisitada.
 *
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada conterá duas linhas.
 * A primeira, com três números inteiros positivos, separados entre si por um espaço.
 * Todos os três números são inferiores ou iguais a 100.
 * A segunda linha conterá três letras maiúsculas A, B e C (sem espaços entre elas)
 * representando a ordem desejada de impressão dos valores das variáveis.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * A saída deve conter, numa linha, os inteiros a, b e c na ordem desejada,
 * separados por espaços simples.
 * Após o último número da saída deve aparecer apenas o caractere de quebra de linha: \\n.
 **/
int main() {

    int numeros[3];
    char ordem[3];

    scanf("%i %i %i", &numeros[0], &numeros[1], &numeros[2]);
    scanf(" %c  %c  %c", &ordem[0], &ordem[1], &ordem[2]);

    while (numeros[0] > numeros[1] || numeros[1] > numeros[2]) {
        if (numeros[0] > numeros[1]) {
            trocarNumeros(&numeros[0], &numeros[1]);
        }
        if (numeros[1] > numeros[2]) {
            trocarNumeros(&numeros[1], &numeros[2]);
        }

    }

    int i = 0;
    while (i < 3) {
        if (ordem[i] == 'A')
            printf("%i", numeros[0]);

        if (ordem[i] == 'B')
            printf("%i", numeros[1]);

        if (ordem[i] == 'C')
            printf("%i", numeros[2]);

        if (i != 3)
            printf(" ");
        i++;
    }
    printf("\n");


}
