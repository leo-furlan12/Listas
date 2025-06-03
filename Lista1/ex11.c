#include<stdio.h>

int main(){

int x; 
printf("Dias : ");
scanf("%d", &x);

int anos, restoAnos, semana, dias;

anos = x / 365;
restoAnos = x % 365;
semana = restoAnos / 7;
dias = restoAnos % 7;

printf(" anos: %d\n Semanas: %d\n Dias: %d\n", anos, semana, dias);


return 0;
}