#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{   setlocale(LC_ALL,"Portuguese");
	
	int tamanho;
	char string[50];
	
	printf ("Digite a string: ");
	gets (string);
	tamanho = strlen(string);
	printf ("Tamanho: %d", tamanho);

	return 0;
}
