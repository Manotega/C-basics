#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float x1, x2;

    printf("Digite o valor de a:\n");
    scanf("%f", &a);
    if (a == 0) {
        printf("Valor invalido\n");
        return 0;
    }

    printf("Digite o valor de b:\n");
    scanf("%f", &b);
    printf("Digite o valor de c:\n");
    scanf("%f", &c);

    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2*a;
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2*a;

    printf("Raiz 1 : %.2f\nRaiz 2: %.2f", x1, x2);
}