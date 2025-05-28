#include <stdio.h>
int main()
{
    int valor, cont = 0, i;
    printf("Descubra os numeros maiores que 100!\n");
    printf("Informe dez numeros:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Valor %d:", i);
        scanf("%d", &valor);
        if (valor > 100)
            cont++;
    }
    printf("Entre os valores lidos %d são maiores que 100", cont);
    return 0;
}