#include <stdio.h>
#include <string.h>
int main (){
    char string1[40],string2[40];
    gets(string1);
    gets(string2);
    strcat (string1, string2);
    printf ("Seu resultado: %s", string1);
    return 0;
}
