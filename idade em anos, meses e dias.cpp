#include <stdio.h>
int main ()
{
	int dias,ano,mes,dia;
	scanf ("%d", &dias);
	ano = (dias/365);
	mes = ((dias/30)-((ano*365)/30));
	dia = (dias - ((ano*365)+(mes*30)));
	printf ("%d ano (s)\n", ano);
	printf ("%d mes (es)\n", mes);
	printf ("%d dia (s)\n", dia);
	return 0;
}
