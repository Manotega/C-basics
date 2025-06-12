#include <stdio.h>

int parRecursivo(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 0) {
        return 1;
    }
    return parRecursivo(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    if (parRecursivo(n)) {
        printf("Par");
    } else {
        printf("Impar");
    }
    return 0;
}