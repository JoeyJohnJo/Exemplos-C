//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    double salarioMin = 937.00,
            rendaBruta;
    int qtdFamilia, ensino, etinia;

    scanf("%lf %i %i %i", &rendaBruta, &qtdFamilia, &ensino, &etinia);

    double rendaPerCapita = rendaBruta / qtdFamilia;
    int l1 = ensino == 2 && rendaPerCapita <= 1.5 * salarioMin;
    int l2 = ensino == 2 && rendaPerCapita <= 1.5 * salarioMin && etinia != 4;
    int l3 = ensino == 2;
    int l4 = ensino == 2 && etinia != 4;

    if (l2) {
        printf("ALUNO COTISTA (L2)\n");
        return 0;
    }

    if (l1) {
        printf("ALUNO COTISTA (L1)\n");
        return 0;
    }

    if (l4) {
        printf("ALUNO COTISTA (L4)\n");
        return 0;
    }

    if (l3) {
        printf("ALUNO COTISTA (L3)\n");
        return 0;
    }

    printf("ALUNO NAO COTISTA\n");
}