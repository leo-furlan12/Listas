#include <stdio.h>

void read_vector(int n, int vet[]){
    n = 8;
    int i;
    for (i = 0; i<n; i++ ){


        int x;
        printf("digite o numeros: \n");
        scanf("%d",&x);
        vet[i] = x;
    }

    for(i = 0; i<n; i++){
        printf(" %d \t", vet[i]);
    }






}

int main(){
    int n = 8;
    int vetor[8]={};
    read_vector(8,vetor);

    return 0;


    
}