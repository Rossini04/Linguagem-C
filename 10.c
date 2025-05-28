/*10.Desenvolver um programa que apresente todos os números divisíveis por 4
que sejam menores que 200.
*/
#include <stdio.h>
int main()
{
    int i;
    printf("Os números divisíveis por 4 menores que 200 são:\n");
    for (i = 1; i <= 200; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
