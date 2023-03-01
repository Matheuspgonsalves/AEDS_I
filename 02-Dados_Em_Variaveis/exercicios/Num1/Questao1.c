//Perímetro de um quadrado de lado igual a sete

//Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //função principal
{
	float lado = 7.0; //declaração e atribuição do valor do lado do quadrado
	float perimetro = lado * 4;//declaração, atribuição e cálculo do perímetro
	
	//contextualização e escrita na tela o valor do perímetro do quadrado
	printf("\nO lado do quadrado e %f", lado);
	printf("\nO perimetro de um quadrado e a soma da largura dos lados.");
	printf("\nLogo: perimetro = %f * 4", lado);
	printf("\nPerimetro = %f", perimetro);
	
	return 0;
}
