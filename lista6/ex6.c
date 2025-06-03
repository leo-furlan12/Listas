#include <stdio.h>


int count_words_plus(const char str[]){

    int i;
    int c = 0;

    for(i = 0; str[i] !=0; i++){

        if((str[i] == ' ') && ((str[i+1] >='A' && str[i+1] <='Z')||(str[i+1] >='a' && str[i+1] <='z'))){

            c++;

        }


    }
    printf("%d",c);
return c;

}




int main(){


    char s[] = " first things first, second things latter ";
    int resultado = count_words_plus(s);
    //printf("%d count_words_plus", resultado);
     


}