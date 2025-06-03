#include <stdio.h>


int main(){
    int x;
    printf("digite um valor de 0-9: \n");


    while(1){
        scanf("%d", &x);

        if( x<0 || x>9){
            printf("digite o valor certo!\n");
        }

        else
        {break;}




    }


    switch (x)
    {
    case 0:
        printf("zero");    
        break;
        
    case 1:
        printf("um");    
        break;
    
    case 2:
        printf("dois");
        break;

    case 3:
        printf("três");
        break;
    
    case 4:
        printf("quatro");
    
    case 5:
        printf("cinco");
        break;

    case 6:
        printf("seis");
        break;
    
    case 7: 
        printf("sete");
        break;

    case 8:
        printf("oito");
        break;
    case 9:
        printf("nove");
        break;
    }
}