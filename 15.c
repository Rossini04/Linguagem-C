/*15.Escreva um algoritmo que informe quais números inteiros que divididos por
11 tem resto igual a 5, no intervalo de 1000 a 1999.
*/
#include <stdio.h>
int main(){
    int i;
    printf("Numeros dividos por 11 que dão 5:\n");
    for(i=1000;i<=1999;i++)
    {
        if(i % 11 == 5)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}