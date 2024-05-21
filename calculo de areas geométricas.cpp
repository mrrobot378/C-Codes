#include <stdio.h>
  int main () 
  {
      double A,B,C,at,ac,aq,ar,atr;
    scanf ("%lf", &A);
    scanf ("%lf", &B);
    scanf ("%lf", &C);
    ac = (3.14159*C*C);
    at = ((A*C)/2);
    aq = (B*B);
    ar = (A * B);
    atr = ((((A+B)*C)/2));
    printf ("TRIANGULO: %.3lf\n", at);
    printf ("CIRCULO: %.3lf\n", ac);
    printf ("TRAPEZIO: %.3lf\n", atr);
    printf ("QUADRADO: %.3lf\n", aq);
    printf ("RETANGULO: %.3lf\n", ar);
return 0; }
