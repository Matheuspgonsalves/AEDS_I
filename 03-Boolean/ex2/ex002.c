//ler tres valores.
//calcular e escrever o maior entre os tr�s valores lidos

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //declara��o e entrada de dados do valor "a"
    int a;
    printf("\nDigite um n�mero: ");
    scanf("%i", &a);

    //declara��o e entrada de dados do valor "b"
    int b;
    printf("\nDigite um n�mero: ");
    scanf("%i", &b);

    //declara��o e entrada de dados do valor "c"
    int c;
    printf("\nDigite um n�mero: ");
    scanf("%i", &c);

    //saida dos dados
    if(a > b && a > c)
    printf("\nO maior valor e valor %i", a);

    else if (b > a && b > c)
    {
        printf("\nO maior valor � %i", b);
    }
    else
    {
        printf("O maior valor e %i", c);
    }

}
