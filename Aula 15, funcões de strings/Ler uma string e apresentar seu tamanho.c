#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{   setlocale(LC_ALL,"Portuguese");
	
	int comp;
	char string1[50],string2[50];
	
	printf ("Digite a string: ");
	gets (string1);
	printf ("Digite a segunda string: ");
	gets (string2);
	comp = strcmp(string1,string2);
	printf ("Tamanho: %d", comp);

	return 0;
}
