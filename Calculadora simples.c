#include <stdio.h>
#include <locale.h>
int main (){
setlocale (LC_ALL, "Portuguese");
  int num_1,num_2;
   char operacao;
   printf ("Vamos calcular dois n�meros dependendo da express�o selecionada: ");
   printf ("\n\nDigite um n�mero: ");
   scanf ("%d", &num_1);
   printf ("\nDigite o segundo: ");
   scanf ("%d", &num_2);
   fflush (stdin);
   printf ("\nDigite a opera��o: ");
   scanf ("%c", &operacao);
   switch (operacao) {
   case '+':
   printf ("\nA soma pae: %d", num_1 + num_2);
   break;
   case '-':
    printf ("A subtra��o fio: %d\n", num_1 - num_2);
    break;
   case '*':
    printf ("A multiplica��o tio: %d\n", num_1 * num_2);
    break;
     case '/':
    printf ("A divis�o fei: %d\n", num_1 / num_2);
    break;
   }

    return 0;
}
