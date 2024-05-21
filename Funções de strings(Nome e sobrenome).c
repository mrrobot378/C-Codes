#include <stdio.h>
#include <string.h>
int main (){
  char nome[40],sobrenome[40],nomecompleto[80]="",esp[2] = " ";
  printf ("Digite o seu primeiro: ");
  gets (nome);
  printf ("\nDigite o seu sobrenome: ");
  gets (sobrenome);
  strcat (nomecompleto, nome);
  strcat (nomecompleto, esp);
  strcat (nomecompleto, sobrenome);
  printf ("\nNome completo: %s", nomecompleto);
return 0;
}

