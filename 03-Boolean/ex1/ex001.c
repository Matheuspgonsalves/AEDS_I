//ler três valores: a, b, c.
//Escrever mensagem caso (a+b) for menor que c.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração e entrada de "a"
    float a;
    printf("\nDigite um valor:");
    scanf ("%f", &a);

    //declaração e entrada de "b"
    float b;
    printf("\nDigite um valor:");
    scanf ("%f", &b);

    //declaração e entrada de "c"
    float c;
    printf("\nDigite um valor:");
    scanf ("%f", &c);

    //saída dos dados
    if ((a+b) < c)
    {
        printf("\nA soma de A+B e menor que C.");
    }
    else if ((a+b) == c)
	{
    	printf("A + B e igual a c");
	}
	else 
	{
		printf("A soma de A+B e maior que c");
	}

    return 0;
}
