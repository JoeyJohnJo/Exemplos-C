//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {
    double massaInicial;
    int segundosDecorridos = 0;
    scanf("%lf", &massaInicial);
    double massaAtual = massaInicial;

    while (massaAtual > 0.5) {
        massaAtual/=2;
        segundosDecorridos+=50;
    }

    int horas = segundosDecorridos / 3600;
    segundosDecorridos %= 3600;
    int mins = segundosDecorridos / 60;
    segundosDecorridos %= 60;

    printf("MASSA INICIAL = %.2lf\n", massaInicial);
    printf("MASSA FINAL = %.2lf\n", massaAtual);
    printf("TEMPO = %dH %dM %dS\n", horas, mins, segundosDecorridos);
}