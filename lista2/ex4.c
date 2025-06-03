#include <stdio.h>


int main(){


    int x;
    printf("insira o ano: \n");
    scanf("%d", &x);


    if (((x % 4) == 0 && (x%100) !=0) || ((x%400) == 0))
    {
        printf("O ano é bisexto \n");
    }

    else
    printf("o Ano não é bissexto");





    return 0;
}