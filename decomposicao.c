//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include <math.h>

/**
 * Faça um programa que leia um número inteiro maior que 1 e
 * apresente sua fatoração em números primos.
 * Uma vez executado, o programa deve sempre apresentar uma fatoração.
 * Caso o número lido seja inválido, o programa deve lê-lo novamente
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler um número inteiro N.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve apresentar a mensagem "Fatoracao nao e possivel para o numero x!"
 * sempre que o número lido não é válido.
 * Caso o número lido seja válido, então o programa deve apresentar sua fatoração
 * no seguinte formato: N = f1 x f2 x ... x fk.
 * Em ambas as situações o programa deve terminar a impressão com um caractere de quebra de linha.
 * * **/

int main() {

    int n;

    do {
        scanf("%d", &n);
        if (n <= 0)
            printf("Fatoracao nao e possivel para o numero %i!\n", n);
    } while (n <= 0);

    printf("%ld = ", n);

    int i = 2;
    int it = 0;
    while (i <= n) {
        int primo = 1;
        int j = 2;
        while (j < i) {
            if (!(i % j)) {
                primo = 0;
                break;
            }
            j++;
        }

        if (primo) {
            while ( !(n % i) ) {
                if (it) printf(" x ");
                printf("%d", i);
                n = n / i;
                it++;
            }
        }

        i++;
    }
    printf("\n");
}