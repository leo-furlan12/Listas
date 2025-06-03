#include <stdio.h>

int main(){

int x;
int modulo;
int divisao;

printf("Qual o valor: \n");
scanf("%d", &x);

divisao = x;

while(1){

    if(divisao == 0){
        break;
    }
    modulo = x % 10;
    printf("Divisao %d\t modulo %d\n", divisao, modulo);   
    
    divisao = x / 10; 
    x = divisao;
     
}

    return 0;
}
