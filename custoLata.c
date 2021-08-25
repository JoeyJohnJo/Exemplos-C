//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/**
 * Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma lata cilíndrica de alumínio,
 * sabendo-se que o custo do alumínio por m2 é R$ 100,00.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler dois valores na entrada: o raio e a altura da lata.
 * Ambos os valores correspondem a valores em metros. Cada valor ocorre em uma linha diferente na
 * entrada.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir a frase: O VALOR DO CUSTO E = XXX.XX, onde XXX.XX é o valor do
 * custo da lata. Logo após o valor do custo da lata o programa deve imprimir o caractere de quebra de linha '\n'
 **/

int main() {

    const double PI = 3.14159;
    double raio, altura, area;

    scanf("%lf%lf", &raio, &altura);

    area = 2 * PI * raio * altura + 2 * PI * raio * raio;

    printf("O VALOR DO CUSTO E =  %.2lf\n", area * 100);
}