#include <stdio.h>

void ordena(int *a, int *b) {
    if (*a > *b) {
        int c = *a;
        *a = *b;
        *b = c;
    }
}

int main() {
    int a, b;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("\nInsira o valor de b: ");
    scanf("%d", &b);

    ordena(&a, &b);
    printf("\nO menor numero eh %d e o maior numero eh %d", a, b);

    return 0;
}