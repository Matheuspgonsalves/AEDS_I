#include <stdio.h>
int main()
{
	printf("\nEleicao\n");
	
	int i, voto, alunos = 10, c1 = 0, c2 = 0, nulo= 0; //c1 refere a "Chapa 1" e c2 refere a "Chapa 2"
	
	for (i = 1; i <= 10; i++)
	{
		do
		{
			printf("\n0-Sair do programa\n1-Chapa 1\n2-Chapa 2\n3-Voto Nulo");
			printf("\nOBS: Sair do programa anula o voto.");
			printf("\nInsira seu voto: ");
			scanf(" %d", &voto);
		}while(voto < 0 || voto > 3); //Fim da estrutura While
		
		switch (voto) //Estrutura que verifica o número inserido e atribui o voto de acordo com a escolha
		{
			case 0:
				printf("\nObrigado por participar\n");
				nulo++;
				break;
			case 1:
				c1++;
				printf("\nVotou em Chapa 1, obrigado!\n");
				break;
			case 2:
				c2++;
				printf("\nVotou em Chapa 2, obrigado!\n");
				break;
			case 3:
				nulo++;
				printf("\nVotou em Nulo, obrigado!\n");
				break;
	    }//fim da estrutura Switch
	}//fim da estrutura for
	
	
	printf("\nChapa 1 obteve: %d votos", c1);
	printf("\nChapa 2 obteve: %d votos", c2);
	printf("\nChapa 3 obteve: %d votos\n", nulo);
	
	int percC1, percC2, percNulo; //variaveis para armazenar a porcentagem de votos de cada opcao
	
	percC1 = c1 * 100 / alunos;
	percC2 = c2 * 100 / alunos;
	percNulo = nulo * 100 / alunos;
	
	if(c1 > c2)
	{
		printf("\nChapa 1 venceu com %d%% de votos.", percC1);
		printf("\nChapa 2 perdeu com %d%% de votos.", percC2);
		printf("\nVotos nulos obteve %d%% de votos.", percNulo);
	}
	else if(c2 > c1)
	{
		
		printf("\nChapa 2 venceu com %d%% de votos.", percC2);
		printf("\nChapa 1 perdeu com %d%% de votos.", percC1);
		printf("\nVotos nulos obteve %d%% de votos.", percNulo);
	}
	else 
	{
		printf("\nOcorreu um empate entre as chapas\n");
		printf("\nChapa 1 obteve %d%% de votos.", percC1);
		printf("\nChapa 2 obteve %d%% de votos.", percC2);
		printf("\nVotos nulos obteve %d%% de votos.", percNulo);
	}
	
	
}
