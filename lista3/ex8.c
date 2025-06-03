#include <stdio.h>


int main(){


int n;
int x = 1;
int y = 1;
int i;
int f;

printf("Quantas vezes o prgrama vai repetir: \n");
scanf("%d", &n);

for(i = 0;i < (n - 2); i++){

    f = x + y;
    y = x;
    x = f; 
    printf("  %d", x); 
}






    return 0;
}