/*18.Elaborar um programa que leia 15 valores numéricos inteiros positivos e
apresente a soma dos fatoriais desses números.
*/
#include <stdio.h>
int main () {
	int i, j, fat, soma=0, num;
	
	for (i=0; i<15;i++){
		printf("\nInforme o valor: ");
		scanf("%d", &num);
		fat = 1;
		for (j=num; j>0; j--)
			fat *= j;
		printf("Fatorial de %d = %d\n", num, fat);
		soma += fat;
	}
	
	printf("\nSomatorio dos fatoriais: %d\n", soma);
	
	return 0;
}