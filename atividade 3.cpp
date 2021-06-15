#include<stdio.h>
#include<locale.h>
int main(){
	char caractere;
	printf("Digite um caractere: ");
		scanf("%c", &caractere);
	
	printf("Caractere em: \n");
	printf("Forma caractere: %c\n", caractere);
	printf("Forma decimal: %i\n", caractere);
	printf("Forma hexadecimal: 0x%x\n", caractere);
	
	return 0;
}
