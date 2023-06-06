#include <stdio.h>

int main ()
{
	puts("\nCalcular a area de um circulo.");
	float pi=3.14, raio, area;
	
	puts("\nInforme o raio do circulo.");
	scanf("%f", &raio);
	area = pi*(raio*raio);
	
	printf("\nArea do circulo e %f", area);
	return 0;
}
