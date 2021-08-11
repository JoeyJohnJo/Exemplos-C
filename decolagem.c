//
// Created by joeyjohnjo on 10/08/2021.
//

#include <stdio.h>

/*
 * Escrever um algoritmo que leia a massa (em toneladas) de um avião, sua aceleração (m/s²) e o tempo (s)
 * que levou do repouso até a decolagem. O programa deve calcular e escrever a velocidade atingida (Km/h),
 * o comprimento da pista (m) e o trabalho mecânico realizado (J) no momento da decolagem.
 * ----------------------------------------- ENTRADA -------------------------------------------------------------------
 * O programa deve ler três linhas de entrada.
 * A primeira linha contém um valor do tipo double representando a massa do avião em toneladas.
 * A segunda linha, contém um valor do tipo double correspondente à aceleração de avião.
 * A terceira, linha contém um valor do tipo double correspondente ao tempo em segundos gasto na decolagem.
 * ------------------------------------------ SAÍDA --------------------------------------------------------------------
 * O programa deve imprimir três linhas.
 * A primeira, contém a frase: VELOCIDADE = x, onde x é o valor da velocidade do avião em Km/h.
 * A segunda, contém a frase: ESPACO PERCORRIDO = y, onde y corresponde ao espaço em metros percorrido
 * pelo avião durante a decolagem.
 * A terceira linha contém a frase: TRABALHO REALIZADO = z, onde z corresponde ao valor do trabalho em Joules,
 * realizado pelo avião durante a decolagem.
 * Os valores de x, y e z devem ser do tipo double e devem conter duas casas decimais
 * e após esses valores deve vir o caractere de quebra de linha \n.
 * */

int main() {

    double massa, aceleracao, tempo, velocidade, espacoPercorrido, trabalhoRealizado;

    scanf("%lf%lf%lf", &massa, &aceleracao, &tempo);

    velocidade = aceleracao * tempo; // em m/s²
    espacoPercorrido = (aceleracao * (tempo * tempo)) / 2;
    trabalhoRealizado = ((massa * 1000) * (velocidade * velocidade)) / 2;

    printf("VELOCIDADE = %.2lf\n", velocidade * 3.60); // em Km/h
    printf("ESPACO PERCORRIDO = %.2lf\n", espacoPercorrido);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalhoRealizado);

}