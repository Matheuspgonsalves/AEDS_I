//Inserindo Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () // fun��o principal
{
	//Declara��o e atribui��o do valor da base do ret�ngulo
	float base = 3.5;
	
	//Declara��o e atribui��o do valor da altura do ret�ngulo
	float altura = 2.0;
	
	//Declara��o, atribui��o e c�lculo da area do ret�ngulo
	float area = base * altura;
	
	//Escrita na tela da �rea do ret�ngulo
	printf("\nUm retangulo de base igual a %f", base);
	printf("\ne altura igual a %f", altura);
	printf("\ntem uma area igual a %f", area);
	
	return 0;
}
