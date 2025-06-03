# include <stdio.h>

int main(){


    int a, b;
    int q = 1;
    printf("digite o valor de a: \n");
    scanf("%d",&a);
    printf("digite o valor de b: \n");
    scanf("%d",&b);


    int resto = a - b;

    while (resto>=b){

        q++;
        
        resto -= b;

    }

    printf("resto da divisaõ:%d \n", resto);
    printf("divisão:%d\n", q);
    




    return 0;
}