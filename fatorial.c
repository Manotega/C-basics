#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Impossivel calcular fatorial de numeros negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d eh: %d \n", n, fatorial);
    }

    return 0;
}