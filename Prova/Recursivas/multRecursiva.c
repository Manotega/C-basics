#include <stdio.h>

// Codifique uma função recursiva que calcule o produto de dois naturais usando soma
float multRecursiva(float a, float b) {
    if (b == 0) {
        return 0;
    }
    return a + multRecursiva(a, --b);
}

int main() {
    float a, b;
    printf("\nDigite a e b:");
    scanf("%f %f", &a, &b);
    printf("%.2f X %.2f = %.2f", a, b, (multRecursiva(a, b)));
    return 0;
}