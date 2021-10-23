//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    int n;
    double somatorio = 0;
    scanf("%d", &n);

    if (n < 1) {
        printf("Numero invalido!");
        return 0;
    }

    while (n >= 1) {
        somatorio += 1.0/n;
        --n;
    }

    printf("%.6lf\n", somatorio);
}