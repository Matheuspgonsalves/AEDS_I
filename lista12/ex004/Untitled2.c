#include <stdio.h>
#include <ctype.h>

void imprima(float resp){
	printf("\nSeu peso ideal eh: %.2f", resp);
}

float pesoIdeal(char sexo, float altura){
	
	float res;
	
	if(sexo == 'M'){
		res = 72.7 * altura - 58;
	}
	else {
		res = 62.1 * altura - 44.7;
	}
	
	return res;
}

float lerAltura(){
	float altura;
	
	do{
		printf("\nDigite sua altura em metros: ");
		scanf("%f", &altura);
	}while(altura <= 0 || altura > 3);
	
	return altura;
}

char lerSexo(){
	char sexo;
	do{
		printf("\nDigite o sexo [M/F]: ");
		scanf("%c", &sexo);
		sexo = toupper(sexo);
	}while(sexo != 'M' && sexo != 'F');
	
	return sexo;
}

void msg(){
	printf("\nPeso ideal\n");
}

int main(){
	msg();
	
	char sexo;
	sexo = lerSexo();
	
	float altura;
	altura = lerAltura();
	
	float resp;
	resp = pesoIdeal(sexo, altura);
	
	imprima(resp);
	
	
	
}
