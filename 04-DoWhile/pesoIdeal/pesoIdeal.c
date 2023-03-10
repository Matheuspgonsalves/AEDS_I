#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    printf("Peso Ideal\n\n");
    bool erro;
    char sexo;

    do
    {
        printf("Digite sexo[M/F]: \n");
        scanf(" %c", &sexo);

        sexo = toupper(sexo);
        erro = sexo != 'F' && sexo != 'M' ;
        if (erro) printf("Resposta invalida\n");
    } while (erro);


    float altura;
    do
    {
        printf("\nDigite altura: ");
        scanf(" %f", &altura);
        erro = altura < 0 || altura > 2.30;
        if (erro) printf("Resposta Invalida");
    }while (erro);

    float pesoIdeal;
     if (sexo == 'M') {
     	pesoIdeal = (72.7 * altura - 58);
     	printf("O seu peso ideal e %.2f", pesoIdeal);
	 } 
	 
	 else if(sexo == 'F'){
	 	pesoIdeal = 62.1 * altura - 44.7;
	 	printf("O seu peso ideal e %.2f", pesoIdeal);
	 }


return 0;
}
