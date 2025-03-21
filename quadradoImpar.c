#include <stdio.h>

int main() {
    int n, soma = 0, impar = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        soma += impar;
        impar += 2;
    }

    printf("O quadrado de %d eh: %d\n", n, soma);
    return 0;
}