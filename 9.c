/*9.Fazer um algoritmo que leia três notas para cada um dos vinte alunos de uma
turma e escreva a média aritmética de cada aluno.
*/
#include <stdio.h>
int main()
{
    int alunos, quantidadeAlunos;
    float nota1, nota2, nota3, media;
    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &quantidadeAlunos);
    for (alunos = 1; alunos <= quantidadeAlunos; alunos++)
    {
        printf("Digite as 3 notas do aluno:\n");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        printf("A media do aluno %d é %.2f\n", alunos, media);
    }
    return 0;
}