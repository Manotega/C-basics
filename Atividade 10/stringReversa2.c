#include <stdio.h>
#include <string.h>

int main() {
    char texto[50];

    printf("Digite uma frase: ");
    fgets(texto, 50, stdin);
    int tamanho = strlen(texto);

    if (texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }

    for (int i = tamanho - 1, j = 0; i > j; i--, j++) {
        char temp = texto[j];
        texto[j] = texto[i];
        texto[i] = temp;
    }

    printf("Texto invertido: %s", texto);

    return 0;
}