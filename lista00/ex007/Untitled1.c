#include <stdio.h>

int main ()
{
	printf("\nCalcular peso ideal");
	float altura, calculo_peso;
	
	printf("\nInforme sua altura: ");
	scanf("%f", &altura);
	calculo_peso = (72.7 * altura) - 58;
	
	printf("\nO seu peso ideal e: %f", calculo_peso);
	return 0;
}
