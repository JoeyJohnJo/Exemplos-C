//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    int matricula = -1;
    double horasTrabalhadas, valor;

    while (1) {
        scanf("%d %lf %lf", &matricula, &horasTrabalhadas, &valor);
        if (!matricula) return 0;
        printf("%d %.2lf\n", matricula, (horasTrabalhadas * valor));
    }
}