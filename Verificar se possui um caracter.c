#include <stdio.h>
#include <locale.h>
int main ()
{  char string[20],c;
   setlocale(LC_ALL, "Portuguese");
   printf("Digite alguma string: ");
   scanf ("%s", &string);
   printf ("\nDigite algum caractere que queira verificar sua existência na string: ");
   scanf ("%s", &c);
   for (int x = 0; x < 20; x++) {
    if (string [x] == c) {
        printf ("\nExiste!");
           return 0;
    }

   }

   printf ("\nNão existe!");

   return 0;

   }

