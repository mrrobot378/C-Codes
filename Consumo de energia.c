#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float pot,hrs,wd,wm,wa,kwd,kwm,kwa,pkwh,gm;
	
	scanf ("%f", &pot);
	scanf ("%f", &hrs);
	wd = (pot*hrs);
	printf ("Watts/Dia = %.2f", wd);
	wm = ((pot*hrs)*30);
	printf ("\nWatts/Mês = %.2f", wm);
	wa = ((pot*hrs)*365);
	printf ("\nWatts/Ano : %.2f", wa);
	kwd = (wd/1000);
	printf ("\nkWh/Dia = %.3f", kwd);
	kwm = (wm/1000);
	printf ("\nkWh/Mês = %.3f", kwm);
	kwa = (wa/1000);
	printf ("\nkWh/Ano = %.2f", kwa);
	pkwh = 0.27;
    printf ("\nPreço do kWh: R$%f", pkwh);
    gm = (kwm * pkwh);
    printf ("\nGasto mensal é: R$%f", gm);
	
	return 0;
}

