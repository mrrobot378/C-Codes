#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main ()
{   setlocale(LC_ALL,"Portuguese");
	
	char palavras[2][50];
	
    fgets (palavras[0], 50, stdin);
    fgets (palavras[1], 50, stdin);
    printf ("As palavras armazenadas no vetor foram: %s %s", palavras[0],palavras[1]);
	return 0;
}
