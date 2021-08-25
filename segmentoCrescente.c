//
// Created by joeyjohnjo on 10/08/2021.
//

#include <stdio.h>

/**
 * Dados n e uma seqüência de n números inteiros, determinar o comprimento
 * máximo de um segmento crescente na sequência. O comprimento do segmento é dado pelo número de
 * elementos do segmento menos um.
 *
 * ------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler um número inteiro n maior que zero e uma sequência de n números inteiros.
 * Os números podem aparecer em qualquer ordem na sequência.
 * * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve apresentar a mensagem "O comprimento do segmento crescente maximo e: k",
 * onde k é o tamanho do maior segmento crescente encontrado.
 * A mensagem deve ser seguida por um caractere de quebra de linha.
 **/

int main() {

    int n,
        segmentoCrescenteAtual = 0,
        segmentoCrescenteMax = 0,
        nAnterior = 0,
        nAtual = 0;

    scanf("%i", &n);

    while (n-- > 0) {
        scanf("%i", &nAtual);
        if (nAnterior > nAtual) {
            if (segmentoCrescenteAtual > segmentoCrescenteMax)
                segmentoCrescenteMax = segmentoCrescenteAtual;
            segmentoCrescenteAtual = 0;
        }

        nAnterior = nAtual;
        segmentoCrescenteAtual++;
    }

    printf("O comprimento do segmento crescente maximo e: %i\n",
           (segmentoCrescenteAtual > segmentoCrescenteMax ? segmentoCrescenteAtual : segmentoCrescenteMax) - 1);
}