#include <stdio.h>


int main(){

    int x;
    printf("Qual o número: \n");
    scanf("%d",&x);


    int y = x % 2;

    if( y == 1){
        printf("O número é Impar\n");
    }

    else
    printf("o número é par\n");

}