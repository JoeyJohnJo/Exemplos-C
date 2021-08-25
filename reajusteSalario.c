//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

/**
 * Fazer um algoritmo que calcule e imprima o salário reajustado de um funcionário de acordo com as
 * seguintes regras:
 * • Salário de até R$ 300,00, reajuste de 50%;
 * • Salário maior que R$300,00 reajuste de 30%;
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * A entrada conterá uma linha com o salário do funcionário.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * A saída deve conter, uma linha com a frase:
 * SALARIO COM REAJUSTE = x,
 * onde x é um valor real (double) com duas casas decimais e corresponde ao valor do salário reajustado.
 * Logo em seguida ao valor de x, o programa devem imprimir o caractere de quebra de linha: ‘\n’.
 * **/

int main() {

    double salario, comReajuste;

    scanf("%lf", &salario);

    if (salario <= 300.00) {
        comReajuste = salario + salario * 0.5;
    } else {
        comReajuste = salario + salario * 0.3;
    }

    printf("SALARIO COM REAJUSTE = %.2lf", comReajuste);

}