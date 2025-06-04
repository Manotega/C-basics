#include <stdio.h>

void invertido(int n) {
    int m = n % 10;
    printf("%d", m);
    if (n >= 10) {
       invertido(n / 10);
    }
}
int main() {
    int n;
    
    printf("digite o valor de n: \n");
    scanf("%d", &n);
    printf("\nn invertido: ");
    invertido(n);

    return 0;
}