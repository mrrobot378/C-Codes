#include <stdio.h>
int main (){
    int valor [5], num, i;
    printf ("Digite 5 valores: ");
    for (int i=0; i<5; i++){
        printf ("\n\nDigite o %d valor: ", i+1);
        scanf ("%d", &num);
        valor [i] = num;
    }
    printf ("\nValor armazenado: ");
    for (int i=0; i < 5; i++) {
        printf ("%d\t", valor[i]);
    }
  return 0;
}
