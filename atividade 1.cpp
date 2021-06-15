#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float percentual;
	
	while(true){
		printf("Digite o valor percentual que você deseja calcular: ");
			scanf("%f", &percentual);
		if(percentual <= 100 && percentual >= 0) break;
		else printf("Impossível, tente novamente\n");
	}
	float resultado = percentual * 555 / 100;
	printf("%0.0lf%% de 555 é %.2lf", percentual, resultado);
	
	return 0;
}
