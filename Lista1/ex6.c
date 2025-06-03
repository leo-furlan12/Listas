#include <stdio.h> 


int main()
{
    
    const float PI = 3.141593;

    
    float raio;
    printf("valor do Raio:");
    scanf("%f", &raio);



    float diametro = raio * 2;
    float circu = 2 * PI * raio;
    float area = PI * (raio * raio);



    printf("Diametrô = %f\n", diametro);
    printf("Circunferência = %f\n",circu);
    printf("Área = %f\n", area );
    
    
    return 0;
}