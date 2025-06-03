#include <stdio.h>

int lenglet(char s[]){
    int i = 0;
    int x = 0;
    for(i; s[i] != 0; i ++){
        x++;
    }
    x++;
    return x ;
}
int main(){
    char str[] = "gusttavo lima";//14
    int x = lenglet(str);
    printf("%d",x);
}