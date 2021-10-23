//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {
    int n, current = 0, res = 1;
    scanf("%d", &n);
    current = n;
    while (current >= 2) res *= current--;
    printf("%d! = %d", n, res);
}