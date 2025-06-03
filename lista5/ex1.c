# include <stdio.h>


void print_even(int n, int vet[]){

    for(int i = 0; i < n; i++){

        if(vet[i]%2 ==0){
            printf("eh par %d \n", vet[i]);
        }
    }






}


int main (){

        int vetor[20] = {0,1,4,7,9,8,5,6,11,48,13,15,95,16,18,17,19,21,78,28};
        print_even(20, vetor);






    return 0;
}