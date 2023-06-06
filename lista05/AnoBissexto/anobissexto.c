#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char up, letra;
	int ano;
	
	printf("\nVerificacao de ano bissexto\n");
	
	do
	{
		do
		{
			printf("\nDigite um ano valido: ");
			scanf(" %d", &ano);
			if (ano < 0)
			{
				printf("\nO ano digitado e menor que 0, tente novamente com um ano valido.");
			}
		}while(ano < 0);
		
		if(ano % 4 == 0 && ano % 100 != 0|| ano % 400 == 0)
		{
			printf("O ano e bissexto.");
		}
		else 
		{
			printf("O ano nao e bissexto.");
		}
		
		
		do
		{
			printf("\nDeseja verificar outro ano?[S/N]: ");
			scanf(" %c", &letra);
			up = toupper(letra);
			if (up != 'S' && up != 'N')
			{
				printf("\nLetra invalida, tente novamente!\n");
			}
		}while(up != 'S' && up != 'N');
	}while(up == 'S');
}
