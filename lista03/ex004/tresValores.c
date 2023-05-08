#include <stdio.h>

int main()
{
    float a, b, c;

    printf("\nDigite 3 numeros para serem ordenados de forma crescente: \n");

	//numeros a serem lidos
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    if (a>b && a>c || a==b && a>c || a==c && a>b || c==b && a>b)
    {
    	if(b > c){
    		printf("\n\n%.2f, %.2f, %.2f", c, b, a);
		} 
		else {
			printf("\n\n%.2f, %.2f, %.2f", b, c, a);
		}
	}
	
	else if(b>a && b>c || b==a && b>c || b==c && b>a || a==c && b>c)
    {
    	if(a > c){
    		printf("\n\n%.2f, %.2f, %.2f", c, a, b);
		} 
		else {
			printf("\n\n%.2f, %.2f, %.2f", a, c, b);
		}
	}
	
	else if(c>a && c>b || c==a && c>a || c==b && b>a || a==c && b>c)
    {
    	if(b > a){
    		printf("\n\n%.2f, %.2f, %.2f", a, b, c);
		} 
		else {
			printf("\n\n%.2f, %.2f, %.2f", b, a, c);
		}
	}
	else 
	{
		printf("\n\n%.2f, %.2f, %.2f", a, b, c);
	}
    

}
