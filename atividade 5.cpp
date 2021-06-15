#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	
	printf("Digite o sexo (M - Masculino || F - Feminino): ");
		scanf("%c", &sexo);
	sexo = toupper(sexo);
	if(sexo == 'M')
		printf("Sexo Masculino");
	else if(sexo == 'F')
		printf("Sexo Feminino");
	else;

	return 0;
}
