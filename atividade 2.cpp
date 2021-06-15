#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor, numero[3], maior=0;
	
	for(int i = 0; i<3; i++){
		printf("Digite um valor: ");
			scanf("%i", &numero[i]);
	}
	
	for(int k = 0; k<3; k++)
		if(numero[k] > maior) maior = numero[k];
	
	printf("O maior número digitado é %i", maior);
	
	return 0;
}
