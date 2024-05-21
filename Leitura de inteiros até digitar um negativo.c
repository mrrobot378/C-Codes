#include <stdio.h>
#include <limits.h>

int main ()
{  int num = 1, cont = 1, maior, menor;
    maior = INT_MIN;
    menor = INT_MAX;
    printf ("Vamos ler todos os valores inseridos até digitar um número negativo!");

    for (int cont = 1; num > 0; cont++)
        {
        printf ("\n\n Digite o %d valor: ", cont);
        scanf ("%d", &num);
        if (num > 0) {
          if (num > maior) {
             maior = num;
          }
          if (num < menor) {

              menor = num ;
           }
        }
    }
    printf ("\nO maior numero: %d", maior);
    printf ("\nO menor numero: %d", menor);

 return 0;
}
