//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/**
 * Fazer um programa que leia um valor de tempo expresso em horas, minutos e segundos e que converta
 * esse tempo para um valor em segundos.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler três linhas na entrada.
 * A primeira contém um valor em horas,
 * a segunda, contém  um valor em minutos
 * e a terceira, contém um valor em segundos. Os valores são todos números inteiros.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo a frase: O TEMPO EM SEGUNDOS E = X,
 * onde X é o valor do tempo convertido em segundos. Após o valor do tempo em segundos,
 * o programa deve imprimir um caractere de quebra de linha: '\n'.
 * **/

int main() {

    int horas, minutos, segundos, totalEmSegundos;

    scanf("%i%i%i", &horas, &minutos, &segundos);

    totalEmSegundos = segundos + (minutos * 60) + (horas * 60 * 60);

    printf("O TEMPO EM SEGUNDOS E = %i\n", totalEmSegundos);
}