#include <stdio.h>
int main (){
  int qtd, num, soma = 0,cont = 1;
  float media;
   printf ("Vamos ler os valores que inserir, fazer a soma e media!");
   printf ("\n\nQuantos valores?: ");
   scanf ("%d", &qtd);
   while (cont <= qtd){
    printf ("\nColoque o %d valor: ", cont);
    scanf ("%d", &num);
    soma = soma + num;
    cont++;
   }
   printf ("\nA soma pae: %d", soma);
   printf ("\n\nA media fio: %f", media = (float) soma/qtd);
 return 0;
}
