/*12.Ler diversos números e mostrar quantos deles são ímpares. O valor -999 é o
código para fim de entrada.

*/
#include <stdio.h>
int main()
{
    int numero, impar = 0, par = 0;

    do
    {

        printf("Digite -999 para parar.\n");
        printf("Digite um numero:");
        scanf("%d", &numero);
        if (numero == -999)
            --impar;

        if (numero % 2 == 0)
        {
            printf("O número é par.\n");
            par++;
        }
        else
        {
            printf("O número é ímpar\n");
            impar++;
        }
        printf("Impares:%d\nPares:%d\n\n\n\n", impar, par);
    } while (numero != -999);

    return 0;
}