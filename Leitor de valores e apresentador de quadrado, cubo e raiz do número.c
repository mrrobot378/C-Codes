#include <stdio.h>
int main () {
 int num, cont = 1;
  printf ("Vamos ler x valores e apresentar logo em seguida seu quadrado, cubo e raiz!");

  for (cont; num; cont++) {
    printf ("\n\nDigite o %d valor: ", cont);
    scanf ("%d", &num);
    printf ("\nO quadrado do numero: %d", num*num);
    printf ("\nO cubo do numero: %d", num*num*num);
    printf ("\nA raiz quadrada do numero: %.2f", sqrt (num) );
  }

return 0;
}
