# include <stdio.h>
void replace_all(int n, int vet[], int elem){

    for(int i = 0; i < n; i++){
        if(vet[i] == elem){
            (vet[i] = (-1));
        } 

        printf(" %d ", vet[i]);
    }




}



int main(){
    int vetor[8]={1, -5, 67, -45, 2, 2, 0, 48};
    replace_all(8, vetor,2);




}