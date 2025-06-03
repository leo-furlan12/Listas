#include <stdio.h>

int strcmp_plus(const char s1[], const char s2[])
{
 for(int i =0; s1[i] != 0 || s2[i] != 0; i++){
    if(s1[i] != s2[i]){
        return s1[i] - s2[i];
    }

 }
 return 0;

}


int main(){
    char s1[] = "All your BASE are Belong to US!";
    char s2[] = "Ell youR BASe arE Belong to US!";

    int i;
    for(i = 0; s1[i]!= 0; i++){
        if(s1[i]>=97 && s1[i]<123){
        s1[i] = s1[i] - 32;
        }
    }


    for(i = 0; s2[i]!= 0; i++){
        if(s2[i]>=97 && s2[i]<123){
        s2[i] = s2[i] - 32;
        }
    }

    int resultado = strcmp_plus(s1,s2);

    printf("%d",resultado);

    
}