#include <stdio.h>
#define tamanho 10

    void imprimir_array(const int *ptr_vetor, const int lenght)
    {
        for (int i = 0; i < lenght; i++)
        {
            printf("%d ", *ptr_vetor);
            ptr_vetor++;
        }
    }

int main()
{
    int vetor_n[tamanho] = {1,2,3,4,5,6,7,8,9,10};
    imprimir_array(vetor_n, tamanho);

    return 0;
}
