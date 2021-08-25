//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    double lucroAObter,
            latasLC,
            valorLata,
            litrosLeite,
            valorLitroLeite,
            watts,
            valorWatts,
            impostoPago;

    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
          &lucroAObter, &latasLC, &valorLata, &litrosLeite,
          &valorLitroLeite, &watts, &valorWatts, &impostoPago);

    double custo = latasLC * valorLata + litrosLeite * valorLitroLeite + watts * valorWatts;
    custo = custo + (custo * impostoPago / 100);
    double venda = custo + (custo * lucroAObter / 100);

    printf("PRECO DE CUSTO = %.2lf\n", custo);
    printf("PRECO DE VENDA = %.2lf\n", venda);
}