#include <stdio.h>

//Faça um programa que some os numeros impares entre 1 e 1000 e imprima a resposta.

int main()

{
	printf("\nSoma de impares de 1 ao 1000\n");
	
	int i, soma = 0;
	
	for (i = 1;i < 1000; i+=2)
	{
		soma += i;
	}
	printf("%d ", soma);
}
