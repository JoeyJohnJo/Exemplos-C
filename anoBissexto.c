//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Escreva um algoritmo que leia um ano e imprima na tela se o ano lido é bissexto ou não.
 * Um ano é bissexto se ele for múltiplo de 4, exceto quando ele for múltiplo de 100.
 * Os anos múltiplos de 100 somente são bissextos quando são múltiplos de 400.
 * Podem ser anos bissextos somente os anos maiores que 1582.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler um número inteiro.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir a mensagem: "ANO BISSEXTO"
 * caso o ano seja bissexto ou "ANO NAO BISSEXTO" caso contrário.
 * **/

int main() {

    int ano;

    scanf("%i", &ano);

    if (ano <= 1582 || (ano % 100 == 0 && ano % 400 != 0) || ano % 4 != 0) {
        printf("ANO NAO BISSEXTO");
    } else {
        printf("ANO BISSEXTO");
    }

}