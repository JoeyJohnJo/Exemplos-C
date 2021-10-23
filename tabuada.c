//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {
    int count = 0;
    double n, i, k, s;
    scanf("%lf %lf %lf %lf", &n, &i, &k, &s);

    double inc = i;
    printf("Tabuada de soma:\n");
    while (count++ < k) {
        printf("%.2lf + %.2lf = %.2lf\n", n, inc, n + inc);
        inc+=s;
    }

    inc = i;
    count = 0;
    printf("Tabuada de subtracao:\n");
    while (count++ < k) {
        printf("%.2lf - %.2lf = %.2lf\n", n, inc, n - inc);
        inc+=s;
    }

    inc = i;
    count = 0;
    printf("Tabuada de multiplicacao:\n");
    while (count++ < k) {
        printf("%.2lf x %.2lf = %.2lf\n", n, inc, n * inc);
        inc+=s;
    }

    inc = i;
    count = 0;
    printf("Tabuada de divisao:\n");
    while (count++ < k) {
        printf("%.2lf / %.2lf = %.2lf\n", n, inc, n / inc);
        inc+=s;
    }
}