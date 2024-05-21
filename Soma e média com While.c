#include <stdio.h>
int main (){
int num, soma = 0,qtd, cont= 0;
float media;
printf ("Vamos ver a soma e media de x valores inseridos!!\n");
printf ("\nQual a quantidade de valores?: ");
scanf ("%d", &qtd);

while (cont < qtd ) {
printf ("\nDigite o %d valor: ", cont + 1);
scanf ("%d", &num);
soma = soma + num;
cont++;
}
media = (float) soma/qtd;
printf ("\nSoma : %d", soma);
printf ("\nA media: %f", media);
return 0;
}
