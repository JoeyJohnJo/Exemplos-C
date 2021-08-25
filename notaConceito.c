//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Em um curso de mestrado as avaliações dos alunos no histórico escolar aparecem
 * em forma de conceito.
 * O regulamento do mestrado indica que um professor pode avaliar seus alunos com notas
 * convencionais de zero a dez, mas precisa repassar à secretaria do curso a avaliação
 * em termos de conceito. Nesse caso, a seguinte tabela de conversão deve ser usada pelo professor
 *
 * | Intervalo da Nota  | Conceito |
 * |    [9,0 a 10]      |     A    |
 * |    [7,5 a 9,0]     |     B    |
 * |    [6,0 a 7,5]     |     C    |
 * |    [0,0 a 6,0]     |     D    |
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada consiste de uma linha com um valor real entre 0 e 10 e com uma casa decimal
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir a seguinte frase:
 * NOTA = x CONCEITO = y,
 * onde x é o valor da nota lido na entrada, impresso com uma casa decimal
 * y é o conceito correspondente.
 * Após a frase, o programa deveimprimir o caractere de quebra de linha: ’\n’.
 * * **/

int main() {

    double nota;

    scanf("%lf", &nota);

    if (nota < 6.0) {
        printf("NOTA = %.1lf CONCEITO = D", nota);
    }
    if (nota >= 6.0 && nota < 7.5) {
        printf("NOTA = %.1lf CONCEITO = C", nota);
    }
    if (nota >= 7.5 && nota < 9.0) {
        printf("NOTA = %.1lf CONCEITO = B", nota);
    }
    if (nota >= 9.0) {
        printf("NOTA = %.1lf CONCEITO = A", nota);
    }
}