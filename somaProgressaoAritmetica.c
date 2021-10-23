//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/*
 * Escreva um programa que seja capaz de encontrar a soma
 * dos n primeiros termos de uma progressão aritmética sem usar a fórmula fechada da soma dos elementos
 * de uma progressão aritmética. Lembre-se que uma progressão aritmética com valor inicial a1 e razão r é
 * a sequência formada por: a1,a1 + r,a1 + 2r,··· ,a1 + (n − 1)r. O programa precisa computar a soma dos
 * valores dessa sequência.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada conterá uma linha com três números inteiros separados entre si por um caractere de espaço.
 * O primeiro número corresponde ao valor inicial da progressão aritmética, o segundo, corresponde à razão
 * da mesma e o terceiro corresponde ao número n de elementos da progressão.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir o valor da soma dos n primeiro elementos da progressão, seguido de um
 * caracter de quebra de linha.
 */
int main() {

    int inicio, razao, n, soma = 0;
    scanf("%d %d %d",  &inicio, &razao, &n);

    int i = 0;
    while (i < n) {
        soma += inicio + i * razao;
        i++;
    }
    printf("%d\n", soma);
}