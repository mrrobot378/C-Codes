#include <stdio.h>
#include <limits.h>
int main (){
int num,cont = 1, soma = 0, maior,menor;
float media;
printf ("Vamos ler 5 valores, apresentar o maior, menor valor, a soma e media!");

maior = INT_MAX;
menor = INT_MIN;

 while (cont <= 5){
    printf ("\n\nColoque o %d valor:" ,cont);
    scanf ("%d", &num);
    if (num > maior) {
        maior = num;
    }
    if (num < menor){
        menor = num;
    }
    soma = soma + num;
    cont++;
    }
    media = (float) soma/5;
printf ("\nO maior valor: %d", maior);
printf ("\nO menor valor: %d", menor);
printf ("\nA soma: %d", soma);
printf ("\nA media: %.2f", media);
return 0;
}
