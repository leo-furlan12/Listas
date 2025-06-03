#include <stdio.h>

int is_sorted(int n, int vet[]){


    int i;

    for(i = 0; i>n; i--){

        if(vet[i] < vet[i-1]){
           return 0;
        }
    }
    return 1;
}



int main(){


    int v[] = {1,4,7,9,15,22,48,512};
    int res = is_sorted(8, v); 
    
    printf("%d",res);
    return 0;

}