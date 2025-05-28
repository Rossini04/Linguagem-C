/*14.Ler informa��es sobre 10 pessoas de um grupo. Para cada pessoa deve ser
lida a altura e o sexo. Fazer um algoritmo que calcule e mostre:
a. A maior e a menor altura do grupo;
b. A m�dia das alturas das mulheres;
c. A m�dia das alturas de todos do grupo.*/
#include <stdio.h>
int main(){
	int pessoas,i,contM,contF,numpessoa=0;
	float altura,menorAltura,maiorAltura,somaF,somaM,m�diaF,m�diaGrupo,somaAlturaGrupo;
	char sexo;
	printf("Quantas pessoas no grupo?\n ");
	scanf("%d",&pessoas);

    for (i = 0; i < pessoas; i++) {
        numpessoa++;

        printf("Digite a altura da %d� pessoa:\n", numpessoa);
        scanf("%f", &altura);

        if (i == 0) { 
            menorAltura = altura;
            maiorAltura = altura;
        }

        if (altura < menorAltura)
            menorAltura = altura;
        if (altura > maiorAltura)
            maiorAltura = altura;

        somaAlturaGrupo += altura;

        printf("Digite o sexo da pessoa (M/F):\n");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm') {
            somaM += altura;
            contM++;
        } else if (sexo == 'F' || sexo == 'f') {
            somaF += altura;
            contF++;
        }
    }

    printf("Maior altura: %.2f\n", maiorAltura);
    printf("Menor altura: %.2f\n", menorAltura);

    if (contF > 0)
        printf("M�dia da altura das mulheres: %.2f\n", somaF / contF);
    else
        printf("N�o h� mulheres no grupo!\n");

    printf("M�dia da altura do grupo: %.2f\n", somaAlturaGrupo / pessoas);

    return 0;
}