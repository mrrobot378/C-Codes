#include <stdio.h>
  int main () 
  {
     float salario,valor;
     int num,hrs;
     scanf ("%d", &num);
     scanf ("%d", &hrs);
     scanf ("%f", &valor);
     salario = (hrs * valor);
     printf ("NUMBER = %d\n", num);
     printf ("SALARY = U$ %.2f\n", salario);
return 0; }
