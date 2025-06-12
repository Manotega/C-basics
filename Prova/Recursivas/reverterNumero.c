#include <stdio.h>
#include <string.h>

void imprimeInvertido(unsigned int n) {
    printf("%u", n % 10);
    if (n >= 10) {
        imprimeInvertido(n / 10);
    }
}

int main() {
    unsigned int n;
    printf("Digite um número natural: ");
    scanf("%u", &n);
    
    printf("Dígitos invertidos: ");
    imprimeInvertido(n);
    printf("\n");

    return 0;
}