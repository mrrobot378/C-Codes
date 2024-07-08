#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main () {
	setlocale (LC_ALL,"Portuguese");
	
     srand(time(0));
     
     int valores[50];
     int numero;
	 int qtd;
     
     printf ("Insira a quantidade de valores aleátorios que deseja:\n");
     scanf ("%d\n", &qtd);
     
     for (int i = 0; i < qtd; i++)
	 {
	 numero = rand () %25;
	 valores[i] = numero;
     
     }
     for (int i = 0; i < qtd; i++)
     {
     	printf ("%d\n", valores[i]);
	 }
	return 0;
}
