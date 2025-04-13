#include <stdio.h>

    void imprimir_resultado(int (*ptr_funcao_soma)(int,int), int a, int b)
    {
        printf("O resultado da soma é: %d", ptr_funcao_soma(a,b));
    }
    
    int soma(int x, int y)
    {
        int resultado;
        resultado = x + y;
        
        return resultado;
    }

int main()
{
    imprimir_resultado(soma,2,3);

    return 0;
}
