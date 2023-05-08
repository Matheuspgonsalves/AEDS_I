#include <stdio.h>

int main()
{
	puts("Celsius para fahrenheit");
	float celsius, fahrenheit;
	
	puts("\nInforme a temperatura em Celsius");
	scanf("%f", &celsius);
	fahrenheit = (celsius*1.8) + 32;
	
	printf("Temperatura em fahrenheit: %f", fahrenheit);
	return 0;
}
