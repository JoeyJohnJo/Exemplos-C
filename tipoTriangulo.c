//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

void trocarNumeros(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;

}

int main() {
    double numeros[3];

    do {
        scanf("%lf %lf %lf", &numeros[0], &numeros[1], &numeros[2]);
        if (numeros[0] == -1 && numeros[1] == -1 && numeros[2] == -1)
            return 0;

        while (numeros[0] < numeros[1] || numeros[1] < numeros[2]) {
            if (numeros[0] < numeros[1]) {
                trocarNumeros(&numeros[0], &numeros[1]);
            }
            if (numeros[1] < numeros[2]) {
                trocarNumeros(&numeros[1], &numeros[2]);
            }

        }

        if (numeros[0] >= numeros[1] + numeros[2]) {
            printf("NAO FORMA TRIANGULO\n");
            continue;
        }

        if (numeros[0] * numeros[0] < numeros[1] * numeros[1] + numeros[2] * numeros[2])
            printf("TRIANGULO ACUTANGULO\n");

        if (numeros[0] == numeros[1] && numeros[1] == numeros[2])
            printf("TRIANGULO EQUILATERO\n");

        if (
                (numeros[0] == numeros[1] && numeros[0] != numeros[2]) ||
                (numeros[0] == numeros[2] && numeros[0] != numeros[1]) ||
                (numeros[1] == numeros[2] && numeros[1] != numeros[0]) ||
                (numeros[1] == numeros[0] && numeros[1] != numeros[2]) ||
                (numeros[2] == numeros[0] && numeros[2] != numeros[1]) ||
                (numeros[2] == numeros[1] && numeros[2] != numeros[0])
            )
            printf("TRIANGULO ISOSCELES\n");

        if (numeros[0] * numeros[0] > numeros[1] * numeros[1] + numeros[2] * numeros[2])
            printf("TRIANGULO OBTUSANGULO\n");

        if (numeros[0] * numeros[0] == numeros[1] * numeros[1] + numeros[2] * numeros[2])
            printf("TRIANGULO RETANGULO\n");
    } while (numeros[0] != -1 && numeros[1] != -1 && numeros[2] != -1);

}