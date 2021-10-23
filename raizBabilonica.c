//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    double n, e, r, y = 1;
    scanf("%lf %lf", &n, &e);

    r = n;
    while (r - y > e) {
        r = (r + y) / 2;
        y = n / r;
        printf("r: %.9lf, erro: %.9lf\n", r, e);
    }
}