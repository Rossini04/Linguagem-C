/*Uma empresa deseja efetuar uma pesquisa de ibope sobre a aceitação de
um certo produto lançado no mercado. Para isto, encomendou uma pesquisa
a ser realizada sobre o produto aplicada a 20 pessoas, onde cada pessoa
responderá o seguinte:
● Seu sexo (f - feminino, m - masculino);
● Sua resposta (1-sim, 2-não).
Faça um programa em C que mostre o resultado dos seguintes cálculos:
a. Total de pessoas que responderam sim;
b. Total de pessoas que responderam não;
c. A porcentagem de pessoas do sexo feminino que responderam sim;
d. A porcentagem de pessoas do sexo masculino que responderam não.
*/
#include <stdio.h>
int main()
{
    int sim = 0, não = 0, i, masculino = 0, feminino = 0, sn = 0, mulheres_sim = 0, homens_não = 0;
    char sexo;
    float pctgm_s, pctgm_n, homens_que_disseram_nao, mulheres_que_disseram_sim;

    for (i = 1; i <= 20; i++)
    {
        printf("Informe qual seu sexo:\n");
        scanf(" %c", &sexo);
        if (sexo == 'F' || sexo == 'f')
            feminino++;
        if (sexo == 'M' || sexo == 'm')
            masculino++;
        printf("Informe um numero de acordo com os a seguir:\n1-Sim\n2-Não\n");
        scanf(" %d", &sn);
        if (sn == 1)
        {
            sim++;
            if (sexo == 'f' || sexo == 'F')
            {
                mulheres_sim++;
            }
        }
        else if (sn == 2)
        {
            não++;
            if (sexo == 'm' || sexo == 'M')
            {
                homens_não++;
            }
        }
    }
    pctgm_s = mulheres_que_disseram_sim / feminino * 100;
    pctgm_n = homens_que_disseram_nao / masculino * 100;
    printf("O total de pessoas que responderam sim foram:%d", sim);
    printf("O total de pessoas que responderam não foram:%d", não);
    printf("A porcentagem de pessoas do sexo feminino que responderam sim:%f", pctgm_s);
    printf("A porcentagem de pessoas do sexo masculino que responderam não:%f", pctgm_n);
    return 0;
}