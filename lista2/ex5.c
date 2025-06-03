#include <stdio.h>


int main(){


    float n1,n2,n3;
    printf("Insira o valor de N1 (0-10): \n");
    scanf("%f", &n1);
    printf("Insira o valor de N2 (0-10): \n");
    scanf("%f", &n2);
    printf("Insira o valor de N3 (0-10): \n");
    scanf("%f", &n3);




    float media = (n1+n2+n3) / 3;

    if( 10>= media && media >= 8.5){
        printf("CONCEITO A. NOTA: %f \n", media);
    }

    else if(8.5 > media && media >= 7){
        printf("CONCEITO B. NOTA: %f \n", media);
    }     
    else if(7 > media && media >= 5.5){
        printf("CONCEITO C. NOTA: %f \n", media);
    }
    else if(5.5 > media && media >= 0){
        printf("CONCEITO D. NOTA: %f \n", media);
    }

    else
    printf("valor errado");

 
    return 0;



}