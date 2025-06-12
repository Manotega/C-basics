#include <stdio.h>
#include <string.h>
// Escreva um programa que leia uma frase, conte e exiba a quantidade de palavras digitadas.

int main() {
    char frase[100];
    int qtdPalavras = 1;
    int t = strlen(frase);
    fgets(frase, 100, stdin);
    for (int i = 0; i < t; i++) {
        if (strcmp(frase+i, " ")) {
            qtdPalavras++;
        }
    }
    printf("quantidade de palavras: %d", qtdPalavras);
    return 0;
}