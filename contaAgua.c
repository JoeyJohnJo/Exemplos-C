//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Desenvolver um programa para calcular a conta de água para uma empresa de saneamento.
 * O custo da água varia dependendo se o consumidor é residencial, comercial ou industrial.
 * A regra para calcular a conta é:
 * • Residencial: R$ 5,00 de taxa mais R$ 0,05 por metros cúbicos gastos;
 * • Comercial: R$ 500,00 para os primeiros 80 metros cúbicos gastos
 *      mais R$ 0,25 por metros cúbicos gastos;
 * • Industrial: R$ 800,00 para os primeiros 100 metros cúbicos gastos
 *      mais R$ 0,04 por metros cúbicos gastos;
 *
 * O programa deverá ler a conta do cliente, o consumo de água por metros cúbicos
 * e o tipo de consumidor ( residencial, comercial e industrial ).
 * Como resultado, o programa deve imprimir a conta do cliente e o valor
 * em Reais a ser pago pelo mesmo.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deverá ler uma linha na entrada contendo:
 * a conta do cliente (um número inteiro),
 * o consumo de água por metros cúbicos (double)
 * e o tipo do consumidor (um caractere: ‘C’ - COMERCIAL, ‘I’ - INDUSTRIAL ou ‘R’ - RESIDENCIAL).
 * Há um espaço entre os valores na linha de entrada
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir duas linhas, contendo o seguinte:
 * • CONTA = u, onde u é o código inteiro identificador da conta;
 * • VALOR DA CONTA = v, onde v é o valor da conta com duas casas decimais,
 * a ser pago pelo consumidor;
 *
 * Após o valor impresso em cada linha, o programa dev imprimir o caractere de quebra de linha; ‘\n’.
 * Os valores de v,x e w devem conter duas casas decimais.
 * * **/

int main() {

    long numeroDaConta;
    double consumo, custo;
    char tipoDaConta;

    scanf("%li %lf %c", &numeroDaConta, &consumo, &tipoDaConta);

    if (tipoDaConta == 'R') {
        custo = 5 + consumo * 0.05;
    }
    if (tipoDaConta == 'C') {
        double excedente = 0;
        if (consumo > 80) {
            excedente = consumo - 80;
        }
        custo = 500 + excedente * 0.25;
    }
    if (tipoDaConta == 'I') {
        double excedente = 0;
        if (consumo > 100) {
            excedente = consumo - 100;
        }
        custo = 800 + excedente * 0.04;
    }

    printf("CONTA = %li\n", numeroDaConta);
    printf("VALOR DA CONTA = %.2lf\n", custo);

}