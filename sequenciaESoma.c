//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int menor(int a, int b) {
    if (a < b)
        return a;
    return b;
}

int maior(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int main() {

    int m, n;
    while (1) {
        if (scanf("%d %d", &m, &n) == EOF)
            return 0;

        int posicao = menor(m, n);
        int limite = maior(m, n);
        int soma = 0;

        while (posicao <= limite) {
            soma += posicao;
            printf("%d ", posicao);
            posicao++;
        }
        printf("soma=%d\n", soma);
    }
}