#include <stdio.h>
#include <string.h>

int strpos(char c[50], char s[50]) {
    int pos = strcspn(s, c);
    pos = pos > strlen(s) - 1 ? -1 : pos;
    return pos;
}

int main() {
    char texto[50], caracter[50];
    printf("Digite seu texto: ");
    fgets(texto, 50, stdin);
    printf("\nDigite o caracter que quer buscar na string: ");
    fgets(caracter, 50, stdin);
    
    printf ("A posicao do caracter na string eh: %d", strpos("O", texto));

    return 0;
}