#include <stdio.h>
#include <ctype.h>

/*
    Programa para verificar se uma entrada � 
    n�mero ou outra coisa
*/


int main()
{
    char opc;
    
    printf("Digite um n�mero:\n");
    scanf("%c", &opc);
    isdigit(opc) ? printf("Parabens, voce digitou um numero!!") : printf("EU DISSE UM NUMERO!");

    return 0;
}
