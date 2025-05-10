#include <stdio.h>

int main() {
    int num, pot;
    printf("Base: ");
    scanf("%d", &num);
    printf("Expoente: ");
    scanf("%d", &pot);

    int res = num;
    for (int i = 1; i < pot; i++) {
        num *= res;
    }
    printf("%d", num);
}