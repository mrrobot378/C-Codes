#include <stdio.h>
#include <string.h>
int main (){
char string[30],stringo[30];
printf ("Vamos comparar duas strings e dizer se forem iguais!");
printf ("\n\nColoque a primeira: ");
gets (string);
printf ("\nColoque a segunda: ");
gets (stringo);
 if (strcmp (string, stringo)==0) {
printf("\nIguais!");
}
 else {
printf ("Desiguais!");
}
return 0;
}
