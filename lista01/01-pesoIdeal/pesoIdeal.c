#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char sexo;
	float altura;
	
	printf("\nDigite o sexo em [M] ou [F]: ");
	scanf(" %c", &sexo);
	
	
	
	if (sexo == 'M') 
	{
		printf("\nDigite a altura: ");
		scanf("%f", &altura);
		float pesoIdeal = 72.7 * altura - 58;
		printf("\nSeu peso ideal: %.2f", pesoIdeal);
	}
	
	else if(sexo == 'F') 
	{
		printf("\nDigite a altura: ");
		scanf("%f", &altura);
		float pesoIdeal = 62.1 * altura - 44.7;
		printf("\nSeu peso ideal: %.2f", pesoIdeal);
	}
}
