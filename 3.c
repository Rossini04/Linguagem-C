#include <stdio.h>
int main()
{
    int i, par, numero;
    printf("Valores pares de 1 ate 25\n");

    for (i = 1; i <= 25; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    return 0;
}