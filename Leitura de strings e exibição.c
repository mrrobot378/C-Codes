#include <stdio.h>
#include <locale.h>
int main ()
{ setlocale(LC_ALL, "Portuguese");
  char nome [20], endereco [20];
  int idade;
  printf ("Digite o seu nome: ");
  scanf ("%s", &nome);
  printf ("\nColoque seu endere�o: ");
  scanf ("%s", &endereco);
  fflush (stdin);
  printf ("\nDigite sua idade: ");
  scanf ("%d", &idade);
  printf ("\nSeu nome: %s", nome);
  printf ("\n\nSeu endere�o: %s", endereco);
  printf ("\n\nSua idade: %d", idade);


return 0;
}
