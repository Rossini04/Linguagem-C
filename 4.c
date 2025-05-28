#include <stdio.h>
int main()
{
    float percent_coelho, percent_rato;
    int ratos = 0, coelhos = 0, experiencias, experi_contagem = 1, total, experimento;
    printf("Digite 1 para coelhos\nDigite 2 para ratos\n");
    for (experiencias = 1; experiencias <= 15; experiencias++)
    {
        printf("Experiencia %d: \n", experiencias);
        printf("Experimento: ");
        scanf("%d", &experimento);
        if (experimento == 1)
            coelhos++;
        if (experimento == 2)
            ratos++;
    }
    total = coelhos + ratos;
    percent_coelho = (coelhos * 100.0) / total;
    percent_rato = (ratos * 100.0) / total;

    printf("Total de cobaias:%d\n", total);
    printf("Total de coelhos:%d\n", coelhos);
    printf("Total de ratos:%d\n", ratos);
    printf("Porcentagem de coelhos:%.2f\n", percent_coelho);
    printf("Porcentagem de rato:%.2f\n", percent_rato);

    return 0;
}