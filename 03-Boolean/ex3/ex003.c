//Ler tr�s valores
//Calcular e escrever o segundo maior entre os tr�s valores lidos

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //declara��o e entrada de dados do valor "a"
    int a;
    printf("\nDigite um numero: ");
    scanf("%i", &a);

    //declara��o e entrada de dados do valor "b"
    int b;
    printf("\nDigite um numero: ");
    scanf("%i", &b);

    //declara��o e entrada de dados do valor "c"
    int c;
    printf("\nDigite um numero: ");
    scanf("%i", &c);

    if(a > b && a < c || a > c && a < b)
    {
        printf("O segundo maior valor e %i", a);
    }
    else if(b > a && b < c || b > c && b < a)
    {
        printf("O segundo maior valor e %i", b);
    }
    else if(c > b && c > a || c > a && c < b)
    {
        printf("\nO segundo maior valor e %i", c);
    }
}
