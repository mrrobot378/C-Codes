#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{   setlocale(LC_ALL,"Portuguese");
	
	char palavra[50];
	int i = 0,tamanho;
	
	printf ("Digite a palavra: ");
	gets (palavra);
	tamanho = strlen(palavra);
	
	while (i < tamanho){
	
	if (palavra[i] >= 'a' && palavra[i] <= 'z') {
		
		palavra[i] = palavra[i] - 32;
		
	}
	i++;
}
    printf ("Palavra modificada: %s", palavra);
	return 0;
}
