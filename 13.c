/*13.Fazer um algoritmo que leia diversos n�meros e mostre quantas vezes o
n�mero 10 foi digitado. O valor 0 (zero) � o c�digo de fim de entrada.*/
#include <stdio.h>
int main(){
	int num, cont=0;
	printf("Descubra quantas vezes o 10 foi digitado\n");
	do {
	printf("Digite um n�mero (0 para sair):\n ");
	scanf("%d", &num);
	if(num==10){
		cont++;
	}
}	while(num!=0);
	printf("O numero 10 foi digitado %d vezes.\n",cont);
	return 0;
}