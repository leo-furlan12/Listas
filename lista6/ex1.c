#include <stdio.h>


void print_string(char str[]){
    
    int i;
    for(i=0; str[i] != 0; i++){
        printf("%c ", str[i]);
    }

    printf("\n%s",str);
}

int main(){

    char s[30]="eu nao aguento mais";
    print_string(s);
    return 0;
}