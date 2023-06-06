#include <stdio.h>
#include <stdbool.h>

bool ehValido(int a, int b, int c)
{
	bool res = true; 
	if(a <= 0 || b <= 0 || c <= 0)
	{
		res = false;
	}
	else if(a + b <= c || a + c <= b || b + c <= a)
	{
		res = false;
	}
	
	return res;
}

int verificarTipo(int x, int y, int z)
{
	int res;
	if(!ehValido(x, y, z))
	{
		res = 0;
	}
	else if(x == y && x == z)
	{
		res = 1;
	}
	else if( (x == y && x != z) || (x != y && x == z))
	{
		res = 2;
	}
	else
	{
		res = 3;
	}
	
	return res;
}

int leia(int y)
{
	int x;
	
	do
	{	
		printf("\nDigite o lado %d: ", y);
		scanf("%d", &x);
	}while(x <= 0);
	return x;
}

void printaTipo(int x)
{
	if(x == 1)
	{
		printf("\nEquilatero\n");
	}
	else if(x == 2)
	{
		printf("\nIsoscele\n");
	}
	else if (x == 3)
	{
		printf("\nEscaleno\n");
	}
}

void msg()
{
	printf("\nVerificacao dos triangulos\n");
}


int main()
{
	msg();
	
	int x = leia(1);
	
	int y = leia(2);
	
	int z = leia(3);
	
	int tipo = verificarTipo(x, y, z);
	
	printaTipo(tipo);
	
	
	
}


