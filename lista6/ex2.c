#include <stdio.h>

void print_string_reversed(char str[]){
    int x;
    int i;
    while(str[x] != 0){
        x++;
    }

    for(i = x; i >= 0; i--){
        printf("%c", str[i]);
    }
}


int main(){


    char s[]="eu nao";
    print_string_reversed(s);
    return 0;
}