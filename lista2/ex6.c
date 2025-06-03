#include <stdio.h>


int main(){


    float a,b,c,d;
    printf("Insira o valor de a : \n");
    scanf("%f", &a);
    printf("Insira o valor de b : \n");
    scanf("%f", &b);
    printf("Insira o valor de c : \n");
    scanf("%f", &c);
    printf("Insira o valor de d : \n");
    scanf("%f", &d);




    if (a>b && a>c && a>d){
        printf("A e o maior");
    }

    else if (b>a && b>c && b>d){
        printf("B e o maior");
    }

    else if (c>a && c>b && c>d){
        printf("C e o maior");
    }

    else
    printf("D é o maior");


    return 0;
}    