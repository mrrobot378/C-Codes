#include <stdio.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "Portuguese");
  int num_1,num_2;
   char operacao;
   printf ("Vamos calcular dois números dependendo da expressão selecionada: ");
   printf ("\n\nDigite um número: ");
   scanf ("%d", &num_1);
   printf ("\nDigite o segundo: ");
   scanf ("%d", &num_2);
   fflush (stdin);
   printf ("\nDigite a operação: ");
   scanf ("%c", &operacao);
   switch (operacao) {
   case '+':
   printf ("\nA soma pae: %d", num_1 + num_2);
   break;
   case '-':
    printf ("A subtração fio: %d\n", num_1 - num_2);
    break;
   case '*':
    printf ("A multiplicação tio: %d\n", num_1 * num_2);
    break;
     case '/':
    printf ("A divisão fei: %d\n", num_1 / num_2);
    break;
   }

    return 0;
}
