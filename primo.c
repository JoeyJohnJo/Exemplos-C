//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    int n, primo = 1, i = 2;
    scanf("%d", &n);

    while (i < n) {
        if (!(n % i)) {
            primo = 0;
            break;
        }
        i++;
    }

    if (primo) {
        printf("PRIMO\n");
        return 0;
    }

    printf("NAO PRIMO\n");
}