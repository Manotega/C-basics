#include <stdio.h>

int main() {
	char caracter;
	printf("Selecione um Caracter\n");
	scanf("%c", &caracter);
	
	printf("octal: %o\ndecimal: %d\nhexadecimal: %x", caracter, caracter, caracter);
	return 0; 
}
