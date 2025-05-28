/*11. Apresentar os resultados das potências de 3, variando do expoente 0 até o
expoente 15.
*/
#include <stdio.h>
int main()
{
    int i, resultado = 1;
    printf("Potencias do numero 3 variando do expoente 0 até o expoente 15:\n");
    for (i = 0; i <= 15; i++)
    {
        printf("3*%d=%d\n", i, 3 * i);
        resultado = resultado * 3;
    }
    return 0;
}