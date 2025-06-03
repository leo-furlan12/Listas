#include <stdio.h>


int main()
{ 

   int a, b;
   printf("valor de A:");
   scanf("%d", &a);
   
   printf("Valor de B: ");
   scanf("%d", &b);
   
   int multiplicacao = a * b;
   int divisao = a / b;
   float divisaoReal = (float) a / (float) b;
   
   printf("multiplicacao = %d \n",multiplicacao);
   printf("divisao = %d \n", divisao);
   printf("divisaoReal = %f \n", divisaoReal);

}