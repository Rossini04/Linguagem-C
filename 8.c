/*8. Considere um frigorífico com 100 bois. Cada boi traz no pescoço um cartão
contendo o número de identificação e o seu peso. Fazer um programa em C
que escreve o número e o peso do boi mais pesado. Supor que não haja
empate no maior peso.*/

#include <stdio.h>
int main()
{
    float peso, maiorPeso = 0;
    int bois, quantidadeBois;
    printf("Maior peso dos bois\n");
    printf("Digite a quantidade de bois:\n");
    scanf("%d", &quantidadeBois);
    for (bois = 1; bois <= quantidadeBois; bois++)
    {
        printf("Digite o peso do boi %d:\n", bois);
        scanf("%f", &peso);
        if (peso > maiorPeso)
        {
            maiorPeso = peso;
        }
    }
    printf("O maior peso é %.2f.", maiorPeso);

    return 0;
}