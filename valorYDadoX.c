//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Desenvolver um algoritmo para ler um número x, calcular e imprimir o valor de y de acordo com as
 * condições abaixo:
 * y = x, se x < 1;
 * y = 0, se x = 1;
 * y = x², se x > 1;
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler uma linha contendo um único número inteiro correspondendo ao valor de x
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir Y = y, onde y é o valor computado de y dado x. Após o valor de y, o programa
 * deve imprimir um caractere de quebra de linha: ‘\n’.
 * **/

int main() {

    int y, x;

    scanf("%i", &x);

    if (x < 1) {
        y = x;
    } else if (x == 1) {
        y = 0;
    } else {
        y = x * x;
    }

    printf("Y = %i", y);

}