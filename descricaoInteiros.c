//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

/**
 * Escreva um algoritmo em Linguagem C que leia um número inteiro (maior que zero e de no máximo 4 dígitos),\n
 * imprima na tela quantas unidades de milhar, centenas, dezenas e unidades formam o número e a\n
 * qual ordem o número pertence.\n
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------\n
 * O programa deve ler um número inteiro.\n
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O algoritmo deve imprimir a mensagem “Numero invalido!” se o número não está dentro do intervalo\n
 * estabelecido e, caso seja válido, realizar a decomposição do número e decidir se as palavras devem ser\n
 * impressas no singular ou no plural. Caso a quantidade de uma ordem seja 0, o algoritmo não deve imprimir\n
 * a quantidade da ordem. O algoritmo deve reproduzir fielmente os exemplos abaixo.\n
 *
 * Entrada ---> 1257\n
 * Saída ---> (quarta ordem) 1257 = 1 unidade de milhar + 2 centenas + 5 dezenas + 7 unidades = 1000 + 200 + 50 + 7\n
 *
 * Entrada ---> 203\n
 * Saída (terceira ordem) 203 = 2 centenas + 3 unidades = 200 + 3\n
 *
 * Entrada ---> 12\n
 * Saída ---> (segunda ordem) 12 = 1 dezenas + 2 unidades\n
 * **/

int main() {

    int num, milhares, centenas, dezenas, unidades;

    scanf("%i", &num);

     if (num <= 0 || num > 9999) {
         printf("Numero invalido!\n");
         return 0;
     }

    milhares = num / 1000;
    centenas = (num / 100) % 10;
    dezenas = (num / 10) % 10;
    unidades = num % 10;

     if (milhares == 0 && centenas == 0 && dezenas == 0) {
         printf("(primeira ordem) %i = %i unidades\n", num, unidades);
         return 0;
     }

     if (milhares == 0 && centenas == 0) {
         printf("(segunda ordem) %i = %i dezenas ", num, dezenas);
         if (unidades != 0) {
             printf("+ %i unidade", unidades);
         }
         printf(" = %i", (dezenas * 10));
         if (unidades != 0) {
             printf(" + %i", unidades);
         }
         printf("\n");
         return 0;
     }

     if (milhares == 0) {
         printf("(terceira ordem) %i = %i centenas ", num, centenas);
         if (dezenas != 0) {
             printf("+ %i dezenas ", dezenas);
         }
         if (unidades != 0) {
             printf("+ %i unidades", unidades);
         }
         printf(" = %i", (centenas * 100));
         if (dezenas != 0) {
             printf(" + %i", (dezenas * 10));
         }

         if (unidades != 0) {
             printf(" + %i", unidades);
         }
         printf("\n");
         return 0;
     }

     printf("(quarta ordem) %i = %i unidade de milhar ", num, milhares);
     if (centenas != 0) {
         printf("+ %i centenas ", centenas);
     }
     if (dezenas != 0) {
         printf("+ %i dezenas ", dezenas);
     }
     if (unidades != 0) {
         printf("+ %i unidades", unidades);
     }
     printf(" = %i", (milhares * 1000));
     if (centenas != 0) {
         printf(" + %i", (centenas * 100));
     }
     if (dezenas != 0) {
         printf(" + %i", (dezenas * 10));
     }

     if (unidades != 0) {
         printf(" + %i", unidades);
     }
     printf("\n");

}
