//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/*
 * Escreva um programa para ler uma linha com dois números inteiros x e y.
 * O programa deve verificar se x é um número par.
 * Se for, o programa deve imprimir uma sequência de y números pares, iniciando com x.
 * Se x não for par, o programa deve imprimir uma linha com a mensagem:
 * O PRIMEIRO NUMERO NAO E PAR.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada conterá uma linha com dois números inteiros separados entre si por um caractere de espaço.
 * Após o segundo número na entrada há um caractere de quebra de linha (\n).
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * Se o primeiro número for par, o programa deve imprimir uma linha contendo a sequência de números
 * pares, com um espaço entre cada número par. Após o último número da serie, o programa deve imprimir
 * um espaço seguido de um caractere de quebra de linha (‘\n’). Se o primeiro número não for par, o programa
 * deve imprimir a mensagem O PRIMEIRO NUMERO NAO E PAR e logo em seguida, o caractere de quebra
 * de linha.
 */
int main() {

    int inicio, qtd;
    scanf("%d %d",  &inicio, &qtd);

    if (inicio % 2) {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    }

    while (qtd--) {
        printf("%d ", inicio);
        inicio+=2;
    }
    printf("\n");

}