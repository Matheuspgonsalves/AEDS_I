//Inserindo Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () // função principal
{
	//Declaração e atribuição do valor da base do retângulo
	float base = 3.5;
	
	//Declaração e atribuição do valor da altura do retângulo
	float altura = 2.0;
	
	//Declaração, atribuição e cálculo da area do retângulo
	float area = base * altura;
	
	//Escrita na tela da área do retângulo
	printf("\nUm retangulo de base igual a %f", base);
	printf("\ne altura igual a %f", altura);
	printf("\ntem uma area igual a %f", area);
	
	return 0;
}
