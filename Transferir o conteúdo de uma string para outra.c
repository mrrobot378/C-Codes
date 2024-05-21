#include <stdio.h>
#include <string.h>
int main (){
  char string[40],v[30];
  printf ("Digite uma string para passarmos seu conteúdo para outra: ");
  gets (string);
  printf ("\n\nDigite agora a string que subsitui: ");
  gets (v);
  strcpy (string, v);
  printf ("\nSeu resultado final: %s", string);
return 0;
}
