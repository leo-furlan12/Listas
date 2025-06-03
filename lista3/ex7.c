#include <stdio.h>


int main (){


    int x;
    int maior = 0;
    int menor;

    while(1){

    scanf("%d", &x);
    if( x == 0)
            {break;}

    if (x > maior){
        maior = x;
        }
        
    if ( x < menor){
        menor = x;
        }

printf("O maior eh:%d\n", maior);
printf("O menor eh:%d\n", menor);    
        
    }


    return 0;
}