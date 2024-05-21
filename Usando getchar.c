#include <stdio.h>
#include <string.h>
int main (){
    char nome[20],endereco[40],telefone[30];
    int idade;
printf ("Vamos ler seus dados!");
printf ("\n\nDigite seu nome: ");
gets(nome);
printf ("\nDigite seu endereco: ");
gets(endereco);
fflush (stdin);
printf ("\nDigite sua idade: ");
scanf ("%d", &idade);
getchar ();
printf ("\nColoque seu telefone: ");
gets(telefone);
printf ("\nSeus dados : %s,%s,%d,%s", nome,endereco,idade,telefone);
return 0;
}
