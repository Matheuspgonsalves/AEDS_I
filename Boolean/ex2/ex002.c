//ler tres valores.
//calcular e escrever o maior entre os três valores lidos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração e entrada de dados do valor "a"
    int a;
    printf("\nDigite um número: ");
    scanf("%i", &a);

    //declaração e entrada de dados do valor "b"
    int b;
    printf("\nDigite um número: ");
    scanf("%i", &b);

    //declaração e entrada de dados do valor "c"
    int c;
    printf("\nDigite um número: ");
    scanf("%i", &c);

    //saida dos dados
    if(a > b && a > c)
    printf("\nO maior valor e valor %i", a);

    else if (b > a && b > c)
    {
        printf("\nO maior valor é %i", b);
    }
    else
    {
        printf("O maior valor e %i", c);
    }

}
