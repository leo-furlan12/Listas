#include <stdio.h>

int main(){


    int n;
    printf("valor de N: \n");
    scanf("%d", &n);

    int c = n;
    while(c > 0){
        printf("linha %d\n", n);
        n--;
        c--;

    }
    
    return 0;
}