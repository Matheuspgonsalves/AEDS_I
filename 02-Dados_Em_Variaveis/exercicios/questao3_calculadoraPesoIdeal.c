//Calcular seu peso ideal sabendo que:
//Peso Ideal de pessoas de gênero masculino: (72,7 x altura) – 58
//Peso Ideal de pessoas de gênero feminino: (62,1 x altura) – 44,7

//Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //função principal
{
	//declarando as variáveis
	float minhaAltura = 1.70;
	float pesoIdeal = 72.7 * minhaAltura - 58;
	
	//saída
	printf("\nO seu peso ideal e %f", pesoIdeal);
	
	return 0;
}
