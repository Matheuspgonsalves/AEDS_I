#include <stdio.h>

void imprimaMsg ();
float valorLido();
float somaReal(float x, float y);
void escreva (float calculo, float a, float b);

int main(void)
{
	imprimaMsg ();
	
	float a, b, soma;
	
	a = valorLido();
	b = valorLido();
	
	soma = somaReal(a, b);
	
	escreva (soma, a, b);
}

void imprimaMsg ()
{
	printf("\nSoma de dois numeros reais\n");
}

float valorLido()
{
	float x;
	printf("\nDigite o valor: ");
	scanf("%f", &x);
	return x;
}

float somaReal(float x, float y)
{
	float soma;
	soma = x + y;
	return soma;
}

void escreva (float soma, float a, float b)
{
	printf("\n%.2f + %.2f = %.2f", a, b, soma);
}
