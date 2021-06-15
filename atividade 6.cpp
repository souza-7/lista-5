#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	printf("=====================\n");
	printf("MENU DE OPÇÕES");
	printf("\n=====================\n");
	printf("[1] Norte\n[2] Nordeste\n[3] Centro-Oeste\n[4] Sudoeste\n[5] Sul\n[0] Sair do programa");
	printf("\n=====================\n\n");
	printf("Digite a opção que você quer: ");
		scanf("%i", &opcao);
	system("cls");
	
	switch(opcao){
		case 1: 
			system("cls");
			printf("REGIÃO NORTE"); 
		break;
		case 2: 
			system("cls");
			printf("REGIÃO NORDESTE"); 
		break;
		case 3: 
			system("cls");
			printf("REGIÃO CENTRO-OESTE"); 
		break;
		case 4:
			system("cls"); 
			printf("REGIÃO SUDESTE"); 
		break;
		case 5: 
			system("cls");
			printf("REGIÃO SUL"); 
		break;
		case 0:
			system("cls"); 
			printf("PROGRAMA ENCERRADO"); 
		break;
	default: printf("Opção incorreta!");
	}
	
	
	
	
	
	return 0;
}
