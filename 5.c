#include <stdio.h>

int main()
{
    int idade, i;
    float peso;
    int maisDe90kg = 0;
    int maiores18_menos60kg = 0;
    int idadeEntre10e30 = 0;
    int somaIdades = 0;
    int totalPessoas = 7;

    for (i = 1; i <= totalPessoas; i++)
    {
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Informe o peso da pessoa %d (em kg): ", i);
        scanf("%f", &peso);

        somaIdades += idade;

        if (peso > 90)
            maisDe90kg++;

        if (idade > 18 && peso < 60)
            maiores18_menos60kg++;

        if (idade >= 10 && idade <= 30)
            idadeEntre10e30++;
    }

    float mediaIdade = (float)somaIdades / totalPessoas;
    float porcentagem10a30 = (float)idadeEntre10e30 / totalPessoas * 100;

    printf("a. Quantidade de pessoas com mais de 90 kg: %d\n", maisDe90kg);
    printf("b. Média das idades: %.2f anos\n", mediaIdade);
    printf("c. Pessoas maiores de idade com menos de 60 kg: %d\n", maiores18_menos60kg);
    printf("d. Porcentagem de pessoas com idade entre 10 e 30 anos: %.2f%%\n", porcentagem10a30);

    return 0;
}