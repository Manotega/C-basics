#include <stdio.h>
#include <string.h>

int main() {
    char texto[50];
    int index = 0;

    printf("Digite uma frase: ");
    fgets(texto, 50, stdin);
    char copiaTexto[50];
    strcpy(copiaTexto, texto);
    int tamanho = strlen(texto);

    for (int i = tamanho - 1; i >= 0; i--) {
        texto[i] = copiaTexto[index];
        index++;
    }

    printf("Texto invertido: %s", texto);
    
    return 0;
}