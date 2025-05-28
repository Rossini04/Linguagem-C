/*					Atividade 7
Escrever um programa em C que leia 5 valores para uma variável n e, para
cada um deles, calcule a tabuada de 1 até n. O programa deve mostrar a
tabuada da seguinte forma:
1 x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n2
*/
#include <stdio.h>
int main()
{
	int numero, valores, i;

	printf("5 Tabuadas:");

	for (valores = 1; valores <= numero; valores++)
	{
		printf("\nDigite o valor %d: ", valores);
		scanf("%d", &numero);
		printf("Tabuada do %d:\n", numero);
		for (i = 1; i <= numero; i++)
		{
			printf("%d*%d=%d\n", i, numero, i * numero);
		}
		printf("%d*%d=%d\n", i, numero, i * numero);
	}

	return 0;
}