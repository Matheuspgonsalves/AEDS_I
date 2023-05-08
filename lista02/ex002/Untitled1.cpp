#include <stdio.h>
int main()
{
	printf("\nCalculadora basica\n");
	
	float opcao, num1, num2, adicao, sub, multi, div;
	
	printf("\nDigite a opcao correspondente: ");
	printf("\n1-adicao \n2-subtracao \n3-multiplicacao \n4-divisao\nOpcao: ");
	scanf("%f", &opcao);
	
	if(opcao == 1)
	{
		printf("\nDigite respectivamente o primeiro e segundo termos: ");
		scanf("%f", &num1);
		scanf("%f", &num2);
		adicao = num1 + num2;
		printf("%.2f + %.2f = %.2f", num1, num2, adicao);
	}else if(opcao ==2)
	{
		printf("\nDigite respectivamente o primeiro e segundo termos: ");
		scanf("%f", &num1);
		scanf("%f", &num2);
		sub = num1 - num2;
		printf("%.2f - %.2f = %.2f", num1, num2, sub);
	}else if(opcao ==3)
	{
		printf("\nDigite respectivamente o primeiro e segundo termos: ");
		scanf("%f", &num1);
		scanf("%f", &num2);
		multi = num1 * num2;
		printf("%.2f x %.2f = %.2f", num1, num2, multi);
	}else if(opcao == 4)
	{
		printf("\nDigite respectivamente o primeiro e segundo termos: ");
		scanf("%f", &num1);
		scanf("%f", &num2);
		div = num1 / num2;
		printf("%.2f + %.2f = %.2f", num1, num2, div);
	}
	
	
}
