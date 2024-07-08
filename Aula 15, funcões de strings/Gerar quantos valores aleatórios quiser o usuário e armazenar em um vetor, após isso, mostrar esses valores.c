#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	char nome[50],endereco[100],str;
	int idade,telefone,val;
	
	printf ("Insira a sua idade: ");
	scanf ("%d", &idade);
	printf ("\nInsira seu telefone: ");
	scanf ("%d", &telefone);
	getchar ();
	printf ("\nInsira o seu nome: ");
	fgets(nome,50,stdin);
	printf ("\nInsira o seu endereço: ");
	fgets(endereco,100,stdin);
	
	sprintf (str,val, "Nome: %s Endereço: %s Idade: %d Telefone: %d ",nome,endereco,idade,telefone);
    printf ("%s " " %d",str,val); 
	return 0;
}
