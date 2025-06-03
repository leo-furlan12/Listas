#include <stdio.h>


int main()
{ 
    int largura, comprimento;
    printf("Insira a largura: ");
    scanf("%d", &largura);
    printf("Insira o comprimento: ");
    scanf("%d", &comprimento);
    
    int perimetro = (largura * 2) + (comprimento * 2);
    int area = largura * comprimento;
    printf("perimetro = %d \n", perimetro);
    printf("area = %d \n", area);
    return 0;


}