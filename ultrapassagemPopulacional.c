//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    int popA, popB,
        years = 0;
    double rateA = 0.03f,
           rateB = 0.015f;

    scanf("%d %d", &popA, &popB);

    while (popA < popB) {
        popA += popA * rateA;
        popB += popB * rateB;
        years++;
    }

    printf("ANOS = %d", years);
}