#include <stdio.h>
int main()
{
	printf("\nA + B menor que C\n");
	
	float a,b,c,calculo = a+b;
	
	printf("\nDigite respectivamente os valores de A,B e C: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if(a + b < c)
	{
		printf("\nA + B e menor que C");
	}else 
	{
		printf("\nA + B nao e menor que C");
	}
}
