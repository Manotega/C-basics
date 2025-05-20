#include <stdio.h>
#include <string.h>

int main() {
    char frase[50];
    int contador = 1;
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            contador += 1;
        }
    }
    printf("A frase contem %d palavras", contador);
    
    return 0;
}