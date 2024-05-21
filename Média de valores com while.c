#include<stdio.h>

int main(){
    int num,soma = 0,cont = 0,media,qtd;
    while (cont < 5) {
        printf ("Digite o valor numero %d: ", cont+1);
        scanf ("%d", &num);
        soma = soma + num;
        cont ++;
        printf ("Contador : %d\n", cont);
    }
    media = (float) soma/cont;
    printf("Media: %d\n: ", media);


    return 0;
}
