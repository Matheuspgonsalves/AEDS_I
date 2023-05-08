#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;
	
	printf("\nDigite o lado A: ");
	scanf("%f", &a);
	
	printf("\nDigite o lado B: ");
	scanf("%f", &b);
	
	printf("\nDigite o lado C: ");
	scanf("%f", &c);
	
	
	
	if(a == b && a == c)
	{
		printf("\nTriangulo Equilatero");
	}
	
	else if(a != b && b != c && a != c)
	{
		printf("\nTriangulo Escaleno");
	}
	
	else if( (a == b && a != c) || (a != b && a == c))
	{
		printf("\nTriangulo Isoceles");
	}
}
