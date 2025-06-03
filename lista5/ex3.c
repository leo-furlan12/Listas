#include <stdio.h>
int find_max(int n, int vet[]){
    int max = 0;
    int min = 100;
    for(int i = 0; i < n; i++){
        
        if(vet[i] > max){
            max = vet[i];
        }

        if(vet[i] < min){
            min = vet[1];
        }

printf("oh maior eh: %d\n",max);
printf("oh menor é %d\n",min);    

    }


    

    return 0;
}

int main(){

   

    int vetor[20] = {0,1,4,7,9,8,5,6,11,48,13,15,95,16,18,17,19,21,78,28};
    find_max(20,vetor);



    return 0;
}