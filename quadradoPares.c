//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include<math.h>

int main() {

    int limite, contador = 1;
    scanf("%i", &limite);

    while (contador <= limite) {
        if (contador % 2 == 0) {
            printf("%i^2 = %i\n", contador, contador * contador);
        }
        contador++;
    }
}