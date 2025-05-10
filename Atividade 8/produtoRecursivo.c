#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) {
        return 0;
    }

    return a + produto(a, b-1);
}

int main() {
    int a, b;
    printf("\nvalor de a e b: ");
    scanf("%d %d", &a, &b);

    printf("\nproduto dos dois: %d", produto(a, b));
    return 0;
}