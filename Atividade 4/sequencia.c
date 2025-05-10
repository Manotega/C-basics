#include <stdio.h>

int main() {
    int num;
    printf("Digite uma sequencia de numeros terminada em 0: ");
    scanf("%d", &num);

    while (num != 0) {
        printf("%d \n", num * num);
        scanf("%d", &num);
    }
    return 0;
}