#include <stdio.h>

void insert_spaces(char str[]){

    int i;
    int aux;
    char new;
    
        for(i = 0; str[i] != 0; i++){
        aux = str[i];
        str[i + 1] = ' ';
        new = aux + str[i + 1];


        printf("%s",new);

    } 
}





int main(){


    
    char s[30] = "C-code-rules!";
    insert_spaces(s);
    printf("string: %s\n", s);

    return 0;
}