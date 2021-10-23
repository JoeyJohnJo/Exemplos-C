//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {
    int n, counter = 1;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Cammpeonato invalido!\n");
        return 0;
    }

    int i = 1;
    while (i < n) {
        int timeB = i + 1;
        while (timeB <= n) {
            printf("Final %d: Time%d X Time%d\n", counter, i, timeB);
            timeB++;
            counter++;
        }
        i++;
    }
}