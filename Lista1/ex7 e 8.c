#include <stdio.h>
int main(){


    float a,b,c;
    printf("Insira o valor de A: \n");
    scanf("%f",&a);
    printf("Insira o valor de B: \n");
    scanf("%f",&b);
    printf("Insira o valor de c: \n");
    scanf("%f",&c);



    float p1,p2,p3;

    printf("Insira o valor de p1: \n");
    scanf("%f",&p1);
    printf("Insira o valor de p2: \n");
    scanf("%f",&p2);
    printf("Insira o valor de p3: \n");
    scanf("%f",&p3);


    float mediaSimples = (a+b+c) / 3;
    float mediaPonderada = ((a*p1) + (b*p2) + (c*p3)) / (p1 + p2 + p3);

    printf("A media simples é: %f\n", mediaSimples);
    printf("A media ponderada é: %f\n", mediaPonderada);


    return 0;

}