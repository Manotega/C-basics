#include <stdio.h>

int fatorial(int num) {
    int fat = 1;

    if (num < 0) {
        return 0;
    }
     
    for (int i = 1; i <= num; i++) {
            fat *= i;
        }
    return fat;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("o fatorial de %d eh %d", n, fatorial(n));

    return 0;
}