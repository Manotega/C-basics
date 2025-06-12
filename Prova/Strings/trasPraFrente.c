#include <stdio.h>
#include <string.h>
// Escreva um programa que leia uma cadeia de caracteres e imprima a mesma de trás pra frente. Sugestão: Utilize a função strlen() para saber o tamanho da frase

int main() {
    char s[50];
    printf("Digite uma frase: ");
    fgets(s, 50, stdin);
    int tamanho = strlen(s);
    for (int i = tamanho; i >= 0; i--) {
        printf("%c", s[i]);
    }
    return 0;
}