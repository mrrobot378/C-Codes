#include <stdio.h>
#include <string.h>
int main (){
char nome[220];
printf ("Digite algo e diremos a quantidade de caracteres: ");
gets (nome);
int tamanho = strlen(nome);
printf ("%d", tamanho);
return 0;
}
