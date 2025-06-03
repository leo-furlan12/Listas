#include <stdio.h>

void set_positive(int n, int vet[]){
    for(int i = 0; i < n; i++){
        if( vet[i] < 0){
            vet[i] =  vet[i]*(-1);
            printf(" %d ",vet[i]);
        }else{
            printf(" %d ",vet[i]);
        }
    }

}

int main (){

    int vetor[8]={1, -5, 67, -45, -1, -1, 0, 48};
    set_positive(8, vetor);


}