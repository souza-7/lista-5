#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float percentual;
	
	while(true){
		printf("Digite o valor percentual que voc� deseja calcular: ");
			scanf("%f", &percentual);
		if(percentual <= 100 && percentual >= 0) break;
		else printf("Imposs�vel, tente novamente\n");
	}
	float resultado = percentual * 555 / 100;
	printf("%0.0lf%% de 555 � %.2lf", percentual, resultado);
	
	return 0;
}
