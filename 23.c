// 23.A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes.
// Faça um algoritmos para coletar dados sobre o salário e número de filhos de
// cada habitante e após as leituras, escrever:
// a. Média de salário da população
// b. Média do número de filhos
// c. Número de filhos do habitante com menor salário. (Supor que não haja
// empate)
// d. Percentual de pessoas com salário menor que R$ 1500,00
// Obs.: O final da leitura dos dados se dará com a entrada de um “salário
// negativo”
#include <stdio.h>
int main() {
    float salario, somaSalarios = 0, mediaSalarios = 0;
    int numFilhos, somaFilhos = 0, mediaFilhos = 0;
    int menorSalarioFilhos = 0, count = 0, countMenor1500 = 0;

    while (1) {
        printf("Insira o salário do habitante (negativo para parar): ");
        scanf("%f", &salario);
        
        if (salario < 0) {
            break; // Finaliza a leitura se o salário for negativo
        }
        
        printf("Insira o número de filhos do habitante: ");
        scanf("%d", &numFilhos);
        
        // Acumula os dados
        somaSalarios += salario;
        somaFilhos += numFilhos;
        count++;
        
        // Verifica o menor salário e número de filhos
        if (count == 1 || salario < menorSalarioFilhos) {
            menorSalarioFilhos = numFilhos;
        }
        
        // Conta quantas pessoas têm salário menor que R$ 1500,00
        if (salario < 1500) {
            countMenor1500++;
        }
    }

    // Calcula as médias
    if (count > 0) {
        mediaSalarios = somaSalarios / count;
        mediaFilhos = somaFilhos / count;
    }

    // Exibe os resultados
    printf("Média de salário da população: R$ %.2f\n", mediaSalarios);
    printf("Média do número de filhos: %.2f\n", mediaFilhos);
    printf("Número de filhos do habitante com menor salário: %d\n", menorSalarioFilhos);
    printf("Percentual de pessoas com salário menor que R$ 1500,00: %.2f%%\n", 
           (countMenor1500 * 100.0) / count);

    return 0;
}