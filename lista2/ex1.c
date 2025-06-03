#include <stdio.h>

int main(){

    int x;
    printf("informe x:\n");
    scanf("%d", &x);

    if(x > 0){
        printf("%d = %d\n",x,x);
    }
    else(x<0);
    {
        printf("%d = %d\n", x, x * (-1));
    }

    return 0;
}