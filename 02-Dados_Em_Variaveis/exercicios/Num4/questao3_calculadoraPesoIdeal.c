//Calcular seu peso ideal sabendo que:
//Peso Ideal de pessoas de g�nero masculino: (72,7 x altura) � 58
//Peso Ideal de pessoas de g�nero feminino: (62,1 x altura) � 44,7

//Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //fun��o principal
{
	//declarando as vari�veis
	float minhaAltura = 1.70;
	float pesoIdeal = 72.7 * minhaAltura - 58;
	
	//sa�da
	printf("\nO seu peso ideal e %f", pesoIdeal);
	
	return 0;
}
