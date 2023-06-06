#include <stdio.h>
int main()
{
	printf("\nOrdem decrescente de tres numeros\n");
	
	float a,b,c;
	
	printf("\nDigite tres valores: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if(a > b && a > c || a > c && a > b || a == b && a > c || a ==c && a > b)
	{
		if(b>c)
		{
			printf("\nOrdem decrescente: %.2f, %.2f, %.2f", a, b, c);
		}else
		{
			printf("\nOrdem decrescente: %.2f, %.2f, %.2f", a, c, b);
		}
	}else if(b > a && b > c || b > c && b > a || b == a && b > c || b == c && b > b)
	{
		if(a>c)
		{
			printf("\nOrdem decrescente: %.2f, %.2f, %.2f", b, a, c);
		}else
		{
			printf("\nOrdem decrescente: %.2f, %.2f, %.2f", b, c, a);
		}
	}else if(c > a && c > b || c > b && c > a || c == a && c > b || c == b && c > a)
	{
		if(a>b)
		{
			printf("\nOrdem decrescente: %.2f, %.2f, %.2f", c, a, b);
		}else
		{
			printf("\nOrdem decrescente: %.2f, %.2f, %.2f", c, b, a);
		}
	}else 
	{
		printf("\nOrdem: %.2f, %.2f, %.2f", a, b, c);
	}
	
}
