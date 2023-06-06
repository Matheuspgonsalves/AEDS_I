#include <stdio.h>

//declaracao de funcoes
void inicio();
float leiaBase();
float leiaAltura();
float calcular(float m, float n);
void escreva(float base, float altura, float res);

int main()
{
	inicio();
	
	float base = leiaBase();
	
	float altura = leiaAltura();
	
	float res = calcular(base, altura);
	
	escreva(base, altura, res);
	
	return 0;
	
}

void inicio()
{
	printf("\nCalcular area retangulo\n");
}

float leiaBase()
{
	float x;
	bool erro;
	do
	{
		printf("\nInsira o valor da base: ");
		scanf("%f", &x);
		
		erro = x < 1;
		if(erro){
			printf("\nValor invalido, tente novamente!");
		}
	}while(erro);
	return x;
}

float leiaAltura()
{
	float y;
	bool erro;
	do
	{
		printf("\nInsira o valor da altura: ");
		scanf("%f", &y);
		
		erro = y < 1;
		if(erro){
			printf("\nValor invalido, tente novamente!");
		}
	}while(erro);
	return y;
}

float calcular(float m, float n)
{
	float res = m * n;
	
	return res;
}

void escreva(float base, float altura, float res)
{
	printf("\n%.2f * %.2f = %.2f", base, altura, res);
}
