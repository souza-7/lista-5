#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[3];
	int substituir;
	
	for(int i = 0; i< 3; i++){
		printf("Digite um valor: ");
			scanf("%i", &numeros[i]);
	}
	
	for(int j = 0; j<3;j++){
		for(int k = j+ 1; k<3; k++){
			if(numeros[j] > numeros[k]){
				substituir = numeros[j];
				numeros[j] = numeros[k];
				numeros[k] = substituir; 
			}
		}
	}
	
	printf("Lista de números: ");
	for(int num = 0; num<2;num++){
		printf("%i, ", numeros[num]);
	}
	printf("%i", numeros[2]);

	return 0;
}
