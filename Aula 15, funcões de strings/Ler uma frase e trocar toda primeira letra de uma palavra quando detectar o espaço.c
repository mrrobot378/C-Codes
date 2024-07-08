#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{   setlocale(LC_ALL,"Portuguese");
	
	char palavras[50];
	int i = 0,qtd,menor,maior;
	
	printf ("Insira a quantidade de palavras:");
	scanf ("%d", &qtd);
	
	printf ("\nDigite as palavras: "); //leitura das palavras
	while (i < qtd){
	
	fgets (palavras,80,stdin);
	
    }
    
    while (i < qtd){
	strcmp();
	
    }
    
	while (i < qtd)
	{
		
    printf ("Lista em ordem:\n%s", palavras);
	
    }
	return 0;
}


