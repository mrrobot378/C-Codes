#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{   setlocale(LC_ALL,"Portuguese");
	
	int n,n1;
	char strnum[40];
	printf ("Dê entrada na string número:\n");
	scanf ("%s", &strnum);
	n = atoi(strnum);
	printf ("Valor inteiro: %d", n);
	printf ("\nInsira o número inteiro:\n");
	scanf ("%d", &n1);
	itoa (n1,strnum,10);
	printf ("Valor string: %s", strnum);
	return 0;
}
