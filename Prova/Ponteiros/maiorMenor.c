#include <stdio.h>

// Escreva uma função ordena (a, b) que receba dois inteiros a e b e devolva o menor deles em a e o maior em b.

void ordena(int *a, int *b) {
    int maior, menor;
    maior = *a > *b ? *a : *b;
    menor = *a < *b ? *a : *b;
    *b = maior;
    *a = menor; 
}

int main() {
    int a, b;
    printf("Valor de a e b: ");
    scanf("%d %d", &a, &b);
    ordena(&a, &b);
    printf("maior = %d\nmenor = %d", b, a);

    return 0;
}