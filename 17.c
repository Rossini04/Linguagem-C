/*17.Elaborar um programa que efetue a leitura sucessiva de valores num�ricos e
apresente no final o somat�rio, a m�dia e o total de valores lidos. O programa
deve fazer as leituras dos valores enquanto o usu�rio estiver fornecendo
valores positivos. Ou seja, o programa deve parar quando o usu�rio entrar
com um valor negativo.*/#include<stdio.h>int main(){	int numero,i = 0,soma=0;	float media,soma;	printf("Leitura e soma dos numeros sucessivamente(digite um numero negativo para parar):\n");	do {		printf("Digite um numero: ");		scanf("%d", &numero);		if(numero > 0) {		    soma += numero;			i++;		}	} while(numero>=0);
	printf("\nSoma: %d\n", soma);
	printf("Media: %.2f\n",soma/i);
	printf("Total de valores lidos:%d\n", i);

return 0;}