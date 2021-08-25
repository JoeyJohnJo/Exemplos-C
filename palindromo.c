//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include <math.h>

/**
 * Faça um programa que leia um número e verifique se ele é palíndromo.
 * Um número é palíndromo quando representa a mesma quantidade lido da esquerda para a direita
 * e da direita para a esquerda.
 * Neste exercício o usuário irá informar números inteiros de no máximo 5 dígitos.
 *
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------\n
 * Um número inteiro.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------\n
 * Se o número fornecido exceder 5 dígitos o programa deve imprimir a mensagem "NUMERO INVALIDO".
 * Caso o número seja válido o programa deve imprimir a mensagem "PALINDROMO",
 * caso o número seja palíndromo, ou "NAO PALINDROMO" caso contrário.
 **/

int main() {

    int numeroInicial, d1, d2, d3, d4, d5;

    scanf("%i", &numeroInicial);

    if (numeroInicial > 99999) {
        printf("NUMERO INVALIDO\n");
        return 0;
    }

    d1 = numeroInicial / 10000;
    d2 = (numeroInicial / 1000) % 10;
    d3 = (numeroInicial / 100) % 10;
    d4 = (numeroInicial / 10) % 10;
    d5 = numeroInicial % 10;

    if (d1 != 0) {
        if (d1 == d5 & d2 == d4) {
            printf("PALINDROMO\n");
            return 0;
        }
    }

    if (d2 != 0) {
        if (d2 == d5 && d3 == d4) {
            printf("PALINDROMO\n");
            return 0;
        }
    }

    if (d3 != 0) {
        if (d3 == d5) {
            printf("PALINDROMO\n");
            return 0;
        }
    }

    if (d4 != 0 && d4 == d5) {
        printf("PALINDROMO\n");
        return 0;
    }

    printf("NAO PALINDROMO\n");

}