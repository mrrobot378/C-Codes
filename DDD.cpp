#include <stdio.h>
#include <locale.h>
int main (){
   setlocale (LC_ALL, "Portuguese");
   int num;
   scanf ("%d", &num);

    for (int i = num - 1; i > 1; i--)
    {
        num = num * i;

    }
    printf ("O fatorial é: %d", num);
   return 0;
}
