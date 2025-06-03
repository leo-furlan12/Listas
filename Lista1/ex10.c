# include <stdio.h>

int main(){
float x ;

printf("Insira o valor: \n");
scanf("%f", &x);
printf("o valor com duas casas decimais: %.2f \n", x);
printf("o valor inteiro: %d\n ",(int)x);
float y =(float)x - (int)x;
printf("valor decimal: %f \n",y);
printf("Valor em mantissa: %e\n",y);

}