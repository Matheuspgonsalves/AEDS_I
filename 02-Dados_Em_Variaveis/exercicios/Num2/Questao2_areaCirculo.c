//�rea de um c�rculo de raio igual a um

//Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //fun��o principal
{
	//Declara��o do raio
	float raio = 1;
	
	//declara��o do c�lculo da area
	float area = 3.14 * (raio * raio);
	
	//saida 
	printf("\nCirculo de raio igual a 1");
	printf("\ntem uma area de %f", area);
	
	return 0;
}
