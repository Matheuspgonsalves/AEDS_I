//Área de um círculo de raio igual a um

//Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //função principal
{
	//Declaração do raio
	float raio = 1;
	
	//declaração do cálculo da area
	float area = 3.14 * (raio * raio);
	
	//saida 
	printf("\nCirculo de raio igual a 1");
	printf("\ntem uma area de %f", area);
	
	return 0;
}
