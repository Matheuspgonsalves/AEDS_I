#include <stdio.h>

int main()
{
	int i, numTermos, t1=2;
	
	printf("\nProgressao aritmetica\n");
	
	do
	{
		printf("\nDigite a quantidade de termos: ");
		scanf(" %d", &numTermos);
	}while (numTermos < 0);
	
	for (int i = 0; i < numTermos; i++)
	{
		printf("\n%d",t1);
		t1 +=3;
	}
}
