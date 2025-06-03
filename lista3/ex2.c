#include <stdio.h>


int main(){

    for(int i = 33; i <= 126; i++){
        printf("%03d \t %03o \t %03X \t %c \n", i,i,i,i);
    }

   return 0; 
}