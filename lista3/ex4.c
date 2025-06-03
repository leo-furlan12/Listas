#include <stdio.h>

int main(){

    int a, b;
    printf("digite o valor de a: \n");
    scanf("%d",&a);
    printf("digite o valor de b: \n");
    scanf("%d",&b);

    int i = b;
    int x = 0;

    while(i >= 1){
      x+=a;
      printf("x=%d \n",x);
      i--;
    }

    return 0;
}