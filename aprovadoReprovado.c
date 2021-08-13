//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/*
 * Fazer um algoritmo que calcule a média aritmética das três notas de um aluno e mostre,
 * além do valor da média, uma mensagem de "APROVADO", caso a média seja igual ou superior a seis, ou a mensagem
 * "REPROVADO", caso contrário.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada conterá uma linha com as três notas do aluno, separadas entre si por um caractere de espaço
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * A saída deve conter duas linhas.
 * A primeira linha deve conter uma frase com o seguinte formato:
 * MEDIA = x, onde x é o valor da média entre as três notas do aluno, contendo duas casas decimais.
 * A segunda linha contém uma das duas mensagens: APROVADO ou REPROVADO.
 * Após o valor da média e após a mensagem, o programa deve imprimir o caractere de quebra de linha: ‘\n’.
 * **/

int main() {

    double n1, n2, n3, media;

    scanf("%lf%lf%lf", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;
    printf("MEDIA = %.2lf\n", media);
    if (media >= 6.0) {
        printf("APROVADO");
        return 0;
    }

    printf("REPROVADO");

}