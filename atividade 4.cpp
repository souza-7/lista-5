#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;

	printf("Digite o n�mero do produto desejado: ");
		scanf("%i", &numero);
	
	switch(numero){
		case 1: printf("Cadeira"); break;
			case 2: printf("Mesa de computador"); break;
				case 3: printf("estante de livros"); break;
					case 4: printf("Mesa de impressora"); break;
						case 5: printf("Estante de CD"); break;
	default: printf("O m�vel ainda n�o est� dispon�vel!!!");
	}	
	
	return 0;
}
