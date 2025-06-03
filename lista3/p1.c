#include <stdio.h>

int find_sequence(int n1, int v1[], int n2, int v2[]){

    int a = 0;
    for(int i = 0; i < n2; i++){

        for(int j = 0; j < n1; j++ ){
            if(v2[i] == v1[j]){
                a++;
            } 
        
    }}


}
int main(){
    int vet1[] = {2, 5, 8, 15, 29, 45, 3, 6, 56, 21};
    int vet2[] = {8, 5, 45, 56};
    int res = find_sequence(10, vet1, 4, vet2);
    printf("%d",res);
    return 0;
}