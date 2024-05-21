#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    //declaração de variáveis
    char palavra[20];
    int i=0;

    //leitura de variáveis
    gets(palavra);

    int a[20];

    //validação
    for(i; i < 20; i++){
        a[i] = atoi(palavra[i]);

        printf("555");
        //printf("%d \n", a[i]);

        if(palavra [i] ){

        }
    }

    return 0;
}
