#include <stdio.h>
int main()
{
    int valores[15], maior, menor, i;
    printf("Informe 15 valores!\n");
    for (i = 1; i <= 15; i++)
    {
        printf("Valor %d:", i);
        scanf("%d", &valores[i]);
    }
    if (i == 0)
    {
        maior = menor = valores[i];
    }
    else
    {
        if (valores[i] > maior)
            maior = valores[i];
        if (valores[i] < menor)
            menor = valores[i];
    }
    printf("\nMaior valor:%d\n", maior);
    printf("\nMenor valor:%d\n", menor);

    return 0;
}