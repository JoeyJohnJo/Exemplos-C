//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * O volume (V) de uma pirâmide cuja base é um hexágono regular é computado pela Equação: v = 1/3 ·Ab · h,
 * onde h é a altura da pirâmide e Ab é a área do hexágono que forma a base da pirâmide.
 * A área do hexágono é computada pela Equação: Ab = (3 · a² · √3) / 2,
 * onde a é o comprimento de uma aresta do hexágono regular.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler uma linha com dois números double, separados entre si por um espaço.
 * O primeiro número corresponde à altura da pirâmide e o segundo número corresponde a uma aresta
 * do hexágono que forma a base da pirâmide. Ambos são valores em metros.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve emitir a frase: O VOLUME DA PIRAMIDE E = x METROS CUBICOS, onde x é o
 * valor do volume da pirâmide em metros cúbicos e com duas casas decimais.
 * Ao final da frase o programa deve imprimir o caractere de quebra de linha (\n).
 **/

int main() {

    double altura, arestaBase, areaBase, volume;

    scanf("%lf%lf", &altura, &arestaBase);

    areaBase = (3.0 * arestaBase * arestaBase * sqrt(3.0)) / 2.0;
    volume = 1.0 / 3.0 * areaBase * altura;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);
}