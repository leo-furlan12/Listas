#include <Stdio.h>
void string_to_upper(char str[]){
    int i;
    for(i = 0; str[i]!= 0; i++){
        if(str[i]>=97 && str[i]<123){
        str[i] = str[i] - 32;
        
        }
 
    }

}

int main(){


    char s[] = "All your BASE are Belong to US!";
    string_to_upper(s);
    printf("%s", s);


    return 0;
}