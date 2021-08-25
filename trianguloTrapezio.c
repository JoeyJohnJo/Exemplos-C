//
// Created by joeyjohnjo on 09/08/2021.
//

#include <stdio.h>
#include <math.h>

/**
 * Leia três valores reais (A, B e C) e verifique se eles formam ou não um triângulo.\n
 * Em caso positivo, calcule o perímetro do triângulo e imprima a mensagem:\n
 * Perimetro = XX.X\n
 *
 * Caso os valores não formem um triângulo, calcule a área do trapézio que tem A e B como base e C como
 * altura, mostrando a mensagem:\n
 * Area = XX.X\n
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------\n
 * A entrada é formada por uma linha contendo três valores decimais separados um do outro por um espaço\n
 * em branco.\n
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------\n
 * A saída deve conter em uma única linha a frase apropriada. \n
 * Observe nos exemplos acima que a saída deve conter apenas uma casa decimal. \n
 * Os valores “X” que aparecem nos formatos são substituídos por dígitos que formam o valor de saída. \n
 * Depois desses valores o programa deve imprimir o caractere de quebra de linha: \\n.
 **/

int main() {

    double a, b, c, absBC, absAC, absAB;
    scanf("%lf %lf %lf", &a, &b, &c);

    absBC = b - c > 0 ? b - c : -1*(b - c);
    absAB = a - b > 0 ? a - b : -1*(a - b);
    absAC = a - c > 0 ? a - c : -1*(a - c);

    if ( (absBC < a && a < b + c) &&
         (absAC < b && b < a + c) &&
         (absAB < c && b < a + b)
    ) {
        printf("Perimetro = %.1lf", (a + b + c));
        return 0;
    }

    printf("Area = %.1lf", ((a + b) / 2) * c);

}