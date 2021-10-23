//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>

int main() {

    unsigned int matricula = 0;
    double p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0,
            l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0, tf = 0, presenca = 0, nf = 0;

    do {
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
              &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &tf, &presenca);

        if (p1 == -1 && p2 == -1 && p3 == -1 && p4 == -1 && p5 == -1 && p6 == -1 && p7 == -1 && p8 == -1 &&
            l1 == -1 && l2 == -1 && l3 == -1 && l4 == -1 && l5 == -1 && tf == -1 && presenca == -1 && matricula == -1)
            return 0;

        nf = (((p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8) * 0.7) +
                (((l1 + l2 + l3 + l4 + l5) / 5) * 0.15) + (tf * 0.15);

        char presencaSuficiente = presenca >= (128.0 / 100.0 * 75.0);
        char notaSuficiente = nf >= 6;

        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ", matricula, nf);

        if (notaSuficiente && presencaSuficiente) {
            printf("APROVADO\n");
            continue;
        }

        if (!notaSuficiente && presencaSuficiente) {
            printf("REPROVADO POR NOTA\n");
            continue;
        }

        if (notaSuficiente && !presencaSuficiente) {
            printf("REPROVADO POR FREQUENCIA\n");
            continue;
        }

        printf("REPROVADO POR NOTA E POR FREQUENCIA\n");


    } while (1);
}