/*16.Fa�a um algoritmo para que um usu�rio adivinhe um n�mero informado por
outro. Inicialmente um usu�rio fornece um n�mero para o algoritmo, e depois
o outro usu�rio deve informar n�meros at� acertar (obviamente o segundo
usu�rio n�o tem acesso a qual n�mero foi digitado pelo primeiro usu�rio).
Para ajud�-lo a descobrir, a cada tentativa o computador deve exibir uma
mensagem do tipo �O n�mero � menor� quando o n�mero do segundo
usu�rio for maior que o do primeiro e uma mensagem do tipo �O n�mero �
maior� quando o segundo usu�rio digitar um n�mero menor. Ao acertar, o
programa deve mostrar uma mensagem apropriada e tamb�m mostrar o
n�mero de tentativas utilizadas.

*/

#include <stdio.h>
int main(){
    int tentativas,numero,numero2;
    
    printf("Usuario n 1�,digite o numero a ser adivinhado pelo usuario n 2�:\n");
    scanf("%d",&numero);
    printf("\nUsuario n 2�,tente adivinhar o numero que o usuario n 1� colocou!\n");
    do
    {
        printf("Insira um numero:\n");
        scanf("%d",&numero2);
        if(numero2<numero)
            printf("o n�mero � maior que o que voce escolheu.\n");
        if(numero2>numero)
            printf("o numero � menor que o que voce escolheu.\n");
    }
    while(numero2 != numero);
    
    if(numero2 == numero)
        printf("\nParabens,voce acertou o numero que o usuario 1 escolheu!!\n");
    
    return 0;
}