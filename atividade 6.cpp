#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	printf("=====================\n");
	printf("MENU DE OP��ES");
	printf("\n=====================\n");
	printf("[1] Norte\n[2] Nordeste\n[3] Centro-Oeste\n[4] Sudoeste\n[5] Sul\n[0] Sair do programa");
	printf("\n=====================\n\n");
	printf("Digite a op��o que voc� quer: ");
		scanf("%i", &opcao);
	system("cls");
	
	switch(opcao){
		case 1: 
			system("cls");
			printf("REGI�O NORTE"); 
		break;
		case 2: 
			system("cls");
			printf("REGI�O NORDESTE"); 
		break;
		case 3: 
			system("cls");
			printf("REGI�O CENTRO-OESTE"); 
		break;
		case 4:
			system("cls"); 
			printf("REGI�O SUDESTE"); 
		break;
		case 5: 
			system("cls");
			printf("REGI�O SUL"); 
		break;
		case 0:
			system("cls"); 
			printf("PROGRAMA ENCERRADO"); 
		break;
	default: printf("Op��o incorreta!");
	}
	
	
	
	
	
	return 0;
}
