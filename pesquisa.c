//
// Created by joeyjohnjo on 06/08/2021.
//

/**
 * Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo
 * produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta ( sim ou não).
 * O programa deve determinar a quantidade de pessoas que disseram sim, a quantidade de pessoas que disseram
 * não, o percentual de mulheres que disseram sim e o percentual de homens que disseram não (nesta ordem).
 *
 * ------------------------------------- ENTRADA -----------------------------------------------------------------------
 *
 * A primeira linha da entrada contém um número inteiro n que corresponde ao número de pessoas entrevistadas.
 * A seguir há n linhas, onde cada linha contém o sexo da pessoa entrevistada (1- feminino, 2 - masculino),
 * seguido pela resposta dada pela pessoa: 1 - sim , 2 -não.
 *
 * ------------------------------------ SAIDA --------------------------------------------------------------------------
 *
 * A saída é composta de quatro linhas.
 * A primeira linha contém a frase SIM = x, onde x é o número de pessoas que responderam sim.
 * A segunda linha contém a frase NAO = y, sendo y o número de pessoas que responderam não.
 * A terceira linha contém a frase FEMININO - SIM = z, onde z é a percentagem de mulheres que responderam sim
 * e deve ter duas casas decimais.
 * A última linha contém a frase MASCULINO - NAO = w, onde w é a percentagem de homens que responderam não.
 *
 * O valor de w deve ser escrito com duas casas decimais.
 * */

#include <stdio.h>

int main() {

    int numeroDeEntrevistados,
            quantidadeSim = 0,
            quantidadeNao = 0,
            mulheresTotal = 0,
            mulheresSim = 0,
            homensTotal = 0,
            homensNao = 0,
            contador = 0;

    printf("Digite a quantidade de pessoas que serão entrevistadas: ");
    scanf("%i", &numeroDeEntrevistados);

    while (contador++ < numeroDeEntrevistados) {
        int sexo, resposta;
        scanf("%i%i", &sexo, &resposta);
        if (resposta == 1) {
            quantidadeSim++;
            if (sexo == 1) {
                mulheresTotal++;
                mulheresSim++;
            } else {
                homensTotal++;
            }
        } else if (resposta == 2) {
            quantidadeNao++;
            if (sexo == 2) {
                homensTotal++;
                homensNao++;
            } else {
                mulheresTotal++;
            }
        }
    }

    float porcentagemMulher = mulheresTotal > 0 ? (float) mulheresSim / (float) mulheresTotal * 100 : 0;
    float porcentagemHomem = homensTotal > 0 ? (float) homensNao / (float) homensTotal * 100 : 0;
    printf("SIM = %i\n", quantidadeSim);
    printf("NAO = %i\n", quantidadeNao);
    printf("FEMININO - SIM = %.2f%\n", porcentagemMulher);
    printf("MASCULINO - NAO = %.2f%\n", porcentagemHomem);

}

