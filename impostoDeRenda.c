//
// Created by joeyjohnjo on 10/08/2021.
//

#include <stdio.h>

/**
 * Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionário pelo governo.
 * Seu programa deverá ler a matrícula de um funcionário,
 * o valor do salário mínimo,
 * o número de dependentes,
 * o salário do funcionário e a
 * taxa de imposto normal que já foi paga pelo funcionário.
 * O imposto bruto é:
 *
 * • 20% do salário do funcionário, se o funcionário ganha mais de 12 salários mínimos;
 * • 8% do salário do funcionário, se o funcionário ganha mais de cinco salários mínimos;
 * • Zero % do salário do funcionário, se ele ganha cinco salários mínimos ou menos.
 *
 * Determine o imposto líquido a ser pago pelo funcionário subtraindo R300,00 no imposto bruto,
 * para cada dependente do funcionário.
 * O programa calculará e imprimirá o imposto a ser pago ou devolvido,
 * que é a diferença entre o imposto líquido e o imposto normal descontado do salário do funcionário.
 * Se a diferença for negativa, o programa deve emitir a mensagem de “imposto a receber”.
 * Se a diferença for um valor positivo o programa deve emitir a mensagem,
 * “imposto a pagar”, e, se for igual a zero, deve emitir a mensagem “imposto quitado”.
 *
 * ------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler uma linha contendo cinco valores na entrada, separados entre si por um espaço:
 * a matrícula (um número inteiro),
 * o valor do salário mínimo (double),
 * o número de dependentes (inteiro),
 * o salário do funcionário (double) e a taxa de imposto (double), nesta ordem
 * * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir quatro linhas, contendo o seguinte:
 * • MATRICULA = u, onde u é o valor da matrícula do funcionário;
 * • IMPOSTO BRUTO = v, onde v é o valor do imposto bruto;
 * • IMPOSTO LIQUIDO = x, onde x é o valor do imposto líquido;
 * • RESULTADO = w, onde w é o valor da diferença entre o imposto normal e o imposto líquido;
 * • A mensagem IMPOSTO A RECEBER, se o valor de w for negativo ou a mensagem IMPOSTO
 * QUITADO, se w for igual a zero, ou a mensagem IMPOSTO A PAGAR, caso w for maior que zero.
 * Os valores de v,x e w devem conter duas casas decimais.
 **/

int main() {

    int matricula, dependentes;
    double salarioMin, salarioFunc, taxa, impostoBruto, impostoLiquido, impostoNormal, resultado;

    scanf("%i %lf %i %lf %lf", &matricula, &salarioMin, &dependentes, &salarioFunc, &taxa);

    if(salarioFunc > (12 * salarioMin)) impostoBruto = 0.2 * salarioFunc;
    else if (salarioFunc > (5 * salarioMin)) impostoBruto = 0.08 * salarioFunc;
    else impostoBruto = 0;

    impostoNormal = salarioFunc * (taxa / 100);
    impostoLiquido = impostoBruto - dependentes * 300;

    resultado = impostoLiquido - impostoNormal;

    printf("MATRICULA = %i\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", impostoBruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", impostoLiquido);
    printf("RESULTADO = %.2lf\n", resultado);

    if (resultado < 0) {
        printf("IMPOSTO A RECEBER\n");
        return 0;
    }

    if (resultado == 0) {
        printf("IMPOSTO QUITADO\n");
        return 0;
    }

    printf("IMPOSTO A PAGAR");
}
