/*16.Faça um algoritmo para que um usuário adivinhe um número informado por
outro. Inicialmente um usuário fornece um número para o algoritmo, e depois
o outro usuário deve informar números até acertar (obviamente o segundo
usuário não tem acesso a qual número foi digitado pelo primeiro usuário).
Para ajudá-lo a descobrir, a cada tentativa o computador deve exibir uma
mensagem do tipo “O número é menor” quando o número do segundo
usuário for maior que o do primeiro e uma mensagem do tipo “O número é
maior” quando o segundo usuário digitar um número menor. Ao acertar, o
programa deve mostrar uma mensagem apropriada e também mostrar o
número de tentativas utilizadas.

*/

#include <stdio.h>
int main(){
    int tentativas,numero,numero2;
    
    printf("Usuario n 1°,digite o numero a ser adivinhado pelo usuario n 2°:\n");
    scanf("%d",&numero);
    printf("\nUsuario n 2°,tente adivinhar o numero que o usuario n 1° colocou!\n");
    do
    {
        printf("Insira um numero:\n");
        scanf("%d",&numero2);
        if(numero2<numero)
            printf("o número é maior que o que voce escolheu.\n");
        if(numero2>numero)
            printf("o numero é menor que o que voce escolheu.\n");
    }
    while(numero2 != numero);
    
    if(numero2 == numero)
        printf("\nParabens,voce acertou o numero que o usuario 1 escolheu!!\n");
    
    return 0;
}