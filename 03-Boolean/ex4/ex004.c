//Ler três valores
//Escrevê-los em ordem crescente

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //entrada e armazenamento dos valores "a", "b", "c"
    float a, b, c;
    printf("Digite os valores: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);


    if (a > b > c) 
    {
        printf("A ordem é %.1f, %.1f, %.1f", &c, &b, &a);
    }
}