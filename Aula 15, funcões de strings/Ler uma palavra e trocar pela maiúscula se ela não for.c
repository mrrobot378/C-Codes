#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{   setlocale(LC_ALL,"Portuguese");
	
	char frase[80];
	int i = 0,tamanho;
	
	printf ("Digite a frase: ");
	fgets (frase,80,stdin);
	tamanho = strlen(frase);
	
	while (i < tamanho){
	if (frase[i] == ' '){
	
	if (frase[i + 1] >= 'a' && frase[i + 1] <= 'z') {
		
		frase[i + 1] = frase[i + 1] - 32;
		
	} 
	}
	i++;
	}
    printf ("Frase modificada: %s", frase);
	return 0;
}


