# include <stdio.h>

int main() {
int i = 1;
int x;
int soma = 0;
printf("qual o valor de x: \n");
scanf("%d", &x);



while(x != 0){
    i++;
    soma += x;
    scanf("%d",&x);
   
    
}
float media = (float)soma / (i - 1);

printf("A soma eh:%d\n", soma);
printf("A media eh:%.2f\n", media);



    return 0;
}