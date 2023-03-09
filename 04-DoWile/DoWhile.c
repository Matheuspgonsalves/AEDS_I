#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()

{
    int idade;
    bool erro;

    do
    {
        printf("Digite idade: ");
        scanf("%i", &idade);
        erro = idade < 0 || idade > 150;
        if (erro) printf("Valor indeterminado\n");
    }
    while (erro);

    int diasVividos = idade * 365;
    printf("Voce viveu %i dias", diasVividos);


    return 0;
}
