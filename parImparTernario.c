#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("escolha um numero:\n");
    scanf("%d", &n);
    
    printf("%s", n % 2 == 0 ? "par" : "impar");
    
    // if (n % 2 == 0) {
    //     printf("o numero %d eh par", n);
    // } else {
    //     printf("o numero %d eh impar", n);
    // }
}