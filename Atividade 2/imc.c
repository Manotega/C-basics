#include <stdio.h>
#include<math.h>

int main() {
    float peso, altura, imc;

    printf("Qual seu peso?\n");
    scanf("%f", &peso);
    printf("Qual sua altura?\n");
    scanf("%f", &altura);
       
    imc = peso / pow(altura, 2);

    printf("Seu imc eh: %.2f", imc);
}