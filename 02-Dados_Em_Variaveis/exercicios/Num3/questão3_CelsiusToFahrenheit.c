// A representação em Farenheit da temperatura igual a 37,777777 graus celsius,
//sabendo que uma medida em celsius pode ser convertida em Farenheit através,
//da seguinte fórmula: Fahrenheit = celsius x 1,8 + 32

//Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //funcao principal
{
	//declaração das variáveis
	float celsius = 37.777777;
	float fahrenheit = celsius * 1.8 + 32;
	
	//saída 
	printf("\nA conversão da temperatura 37,777777 em fahrenheit fica:");
	printf("\nFarenheit = %f", fahrenheit);
	
	return 0;
}

