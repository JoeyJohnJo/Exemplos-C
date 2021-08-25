//
// Created by joeyjohnjo on 10/08/2021.
//

#include <stdio.h>

void trocarNumeros(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    double a1t1, a1t2, a1t3, a1p1, a1p2, a1f;
    double a2t1, a2t2, a2t3, a2p1, a2p2, a2f;
    double a3t1, a3t2, a3t3, a3p1, a3p2, a3f;

    scanf("%lf %lf %lf %lf %lf", &a1t1, &a1t2, &a1t3, &a1p1, &a1p2);
    scanf("%lf %lf %lf %lf %lf", &a2t1, &a2t2, &a2t3, &a2p1, &a2p2);
    scanf("%lf %lf %lf %lf %lf", &a3t1, &a3t2, &a3t3, &a3p1, &a3p2);

    a1f = ((a1t1 + a1t2 + a1t3) / 3 * 0.4) + ((a1p1 + a1p2) / 2 * 0.6);
    a2f = ((a2t1 + a2t2 + a2t3) / 3 * 0.4) + ((a2p1 + a2p2) / 2 * 0.6);
    a3f = ((a3t1 + a3t2 + a3t3) / 3 * 0.4) + ((a3p1 + a3p2) / 2 * 0.6);

    double notas[3] = {a1f, a2f, a3f};

    while (notas[0] < notas[1] || notas[1] < notas[2]) {
        if (notas[0] < notas[1])
            trocarNumeros(&notas[0], &notas[1]);

        if (notas[1] < notas[2])
            trocarNumeros(&notas[1], &notas[2]);
    }

    printf("%.2lf\n", notas[0]);
    printf("%.2lf\n", notas[1]);
    printf("%.2lf\n", notas[2]);

}