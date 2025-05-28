/*13.Fazer um algoritmo que leia diversos números e mostre quantas vezes o
número 10 foi digitado. O valor 0 (zero) é o código de fim de entrada.*/
#include <stdio.h>
int main(){
	int num, cont=0;
	printf("Descubra quantas vezes o 10 foi digitado\n");
	do {
	printf("Digite um número (0 para sair):\n ");
	scanf("%d", &num);
	if(num==10){
		cont++;
	}
}	while(num!=0);
	printf("O numero 10 foi digitado %d vezes.\n",cont);
	return 0;
}