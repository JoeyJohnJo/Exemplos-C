//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Escrever um algoritmo que lê o público total de futebol, as percentagens de pessoas nas seguintes
 * categorias: popular, geral, arquibancada e cadeiras e forneça a renda total do jogo.
 * Sabe-se que o valor dos ingressos por categoria são dados pela tabela abaixo:
 * |   CATEGORIA   |  VALOR INGRESSO  |
 * |    Popular    |     R$ 1,00      |
 * |     Geral     |     R$ 5,00      |
 * |  Arquibancada |     R$ 10,00     |
 * |    Cadeiras   |     R$ 20,00     |
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada contém uma linha inicial com um valor inteiro informando o número de casos de testes que
 * ocorrem nas linhas seguintes.
 * Cada caso de teste seguinte é formado por uma linha contendo os seguintes
 * valores, separados entre si por um espaço:
 * • O número de pessoas que compraram ingresso para o jogo correspondente ao caso de teste.
 * • A percentagem de pessoas que compraram ingresso na categoria Popular.
 * • A percentagem de pessoas que compraram ingresso na categoria Geral.
 * • A percentagem de pessoas que compraram ingresso na categoria Arquibancada.
 * • A percentagem de pessoas que compraram ingresso na categoria Cadeiras.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve gerar uma linha para cada caso de teste na entrada, contendo a frase:
 * A RENDA DO JOGO N. x E = y,
 * onde x corresponde a ordem do caso de teste na entrada e y é um valor real com duas
 * casas decimais que corresponde ao valor da renda total do jogo x.
 **/

int main() {

    int numeroCasos;
    double valorIngressoPopular = 1.0,
           valorIngressoGeral = 5.0,
           valorIngressoArquibancada = 10.0,
           valorIngressoCadeiras = 20.0;

    scanf("%i", &numeroCasos);
    double rendaDosJogos[numeroCasos];

    for (int i = 0; i < numeroCasos; i++) {

        int ingressosVendidos;
        double pctPopular, pctGeral, pctArquibancada, pctCadeiras;

        scanf("%i%lf%lf%lf%lf", &ingressosVendidos, &pctPopular, &pctGeral, &pctArquibancada, &pctCadeiras);

        rendaDosJogos[i] = ( (( (double) ingressosVendidos) / 100 * pctPopular) * valorIngressoPopular) + // renda por ingressos popular
                ( (( (double) ingressosVendidos) / 100 * pctGeral) * valorIngressoGeral) + // renda por ingressos geral
                ( (( (double) ingressosVendidos) / 100 * pctArquibancada) * valorIngressoArquibancada) + // renda por ingressos de arquibancada
                ( (( (double) ingressosVendidos) / 100 * pctCadeiras) * valorIngressoCadeiras); // renda por ingressos de arquibancada

    }

    for (int i = 0; i < numeroCasos; i++) {
        printf("A RENDA DO JOGO N. %i E = %.2lf\n", i+1, rendaDosJogos[i]);
    }
}