#include <stdio.h>
int main ()
{ int num, soma=0, cont=1, qtd;
  float media;
  printf ("Vamos calcular a soma de 5 valores e depois sua media!");
  while (cont <= 5) {
   printf ("\n\nDigite o %d valor: ", cont);
   scanf ("%d", &num);
   soma = soma + num;
   cont++;
  }
  media = (float) soma/5;
  printf ("\nA media pae: %f", media);
 return 0;
}
