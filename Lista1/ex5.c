#include <stdio.h>

int main()
{
    const float PI = 3.141593;
    const int B = 180; 


    float a;
    printf("valor de A:");
    scanf("%f", &a);//entrada de dados

    float resultado = (a * PI ) / B;

    printf("Radianos = %f\n", resultado);

    return 0;
}