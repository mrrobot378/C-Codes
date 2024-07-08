#include <stdio.h>
 int main(){
 int maior, menor, num;
 printf("Digite um numero: ");
 scanf("%d",&num);
 maior = num;
 menor = num;


 do{
 printf("Digite um numero: ");
 scanf("%d",&num);
 if (num > maior){
 maior = num;
 }
 if (num > 0 || num < 0){
 menor = num;
 }
}while (num!=0);
 printf("Maior: %d\n", maior);
 printf("Menor: %d\n", menor);
 return 0;
 }
