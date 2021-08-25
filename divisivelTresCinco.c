//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Desenvolver um programa que leia um número inteiro e verifique
 * se o número é divisível por três e também é divisível por cinco.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler uma linha contendo um número inteiro na entrada
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir uma linha contendo a frase:
 * O NUMERO E DIVISIVEL,
 * se ele for divisível tanto por três quanto por cinco, ou a frase
 * O NUMERO NAO E DIVISIVEL,
 * em caso contrário. Após  imprimir uma das frases,
 * o programa deve imprimir um caractere de quebra de linha: ‘\n’.
 * * **/

int main() {

    int candidato;

    scanf("%i", &candidato);

    if (candidato % 3 == 0 && candidato % 5 == 0) {
        printf("O NUMERO E DIVISIVEL\n");
        return 0;
    }

    printf("O NUMERO NAO E DIVISIVEL\n");
}