//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/**
 * Faça um algoritmo que leia uma data no formato ddmmaaaa usando um único número inteiro.\n
 * Escreva a mesma data no formato dia/mês/ano, \<dia\> de \<mês por extenso\> de \<ano\>.\n
 * O programa deve verificar se o número informado representa uma data válida.\n
 * Caso não seja, imprimir na tela a mensagem "Data invalida!". \n
 * Considere que o ano em questão nunca é bissexto, ou seja, fevereiro tem somente 28 dias.\n
 * \n ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * \n Um número inteiro positivo com 8 dígitos.
 * \n ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * \n O programa deve apresentar a transcrição da data no formado "dd de mês por extenso de aa"
 **/

int main() {

    int data, dia, mes, ano;

    scanf("%i", &data);
    if (data < 10000000 || data > 99999999) {
        printf("Data invalida!");
        return 0;
    }

    dia = data / 1000000;
    mes = (data / 10000) % 100;
    ano = data % 10000;

    int diaForaDosLimites = dia <= 0 || dia > 31;
    int mesForaDosLimites = mes <= 0 || mes > 12;
    int diaErradoParaFevereiro = (mes == 2 && dia > 28);
    int diaErradoParaMesesCom30Dias =  dia > 30 &&
        ( mes == 4 || mes == 6 || mes == 9 || mes == 11 );

    if (diaForaDosLimites || diaErradoParaFevereiro ||
        diaErradoParaMesesCom30Dias || mesForaDosLimites) {
        printf("Data invalida!\n");
        return 0;
    }

    printf("%02d/%02d/%04i, %i de ", dia, mes, ano, dia);
    switch (mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("março");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
        default:
            printf("Data invalida!\n");
            break;
    }
    printf(" de %i\n", ano);
}