// A representa��o em Farenheit da temperatura igual a 37,777777 graus celsius,
//sabendo que uma medida em celsius pode ser convertida em Farenheit atrav�s,
//da seguinte f�rmula: Fahrenheit = celsius x 1,8 + 32

//Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main () //funcao principal
{
	//declara��o das vari�veis
	float celsius = 37.777777;
	float fahrenheit = celsius * 1.8 + 32;
	
	//sa�da 
	printf("\nA convers�o da temperatura 37,777777 em fahrenheit fica:");
	printf("\nFarenheit = %f", fahrenheit);
	
	return 0;
}

