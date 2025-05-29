// 22.Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10
// metros e cresce 3 centímetros por ano. Faça um programa em C que calcule
// e mostre quantos anos serão necessários para que Zé seja maior que Chico.
#include <stdio.h>

int main() {
    int tam_ze, tam_chico, cres_ze, cres_chico, anos = 0;

    printf("Descubra quantos anos serão necessários para Zé ser maior que Chico!\n");
    printf("Tamanho de Zé (em cm): ");
    scanf("%d", &tam_ze);
    printf("Quantos cm Zé cresce por ano? ");
    scanf("%d", &cres_ze);
    printf("Tamanho de Chico (em cm): ");
    scanf("%d", &tam_chico);
    printf("Quantos cm Chico cresce por ano? ");
    scanf("%d", &cres_chico);

    while (tam_ze <= tam_chico) {
        tam_ze += cres_ze;
        tam_chico += cres_chico;
        anos++;
    }

    printf("Serão necessários %d anos para Zé ser maior que Chico!\n", anos);
    printf("Altura final de Zé: %.2f m\n", tam_ze / 100.0);
    printf("Altura final de Chico: %.2f m\n", tam_chico / 100.0);

    return 0;
}