#include <stdio.h>
#include <math.h>

int main() {
    int faltas;
    float media;
    printf("Digite a quantidade de faltas:\n");
    scanf("%d", &faltas);
    printf("Digite a media do aluno:\n");
    scanf("%f", &media);

    if (faltas > 5) {
        printf("Conceito: F\n");
        return 0;
    }
    if (media < 6) {
        printf("Conceito: C\n");
    } else if (media >= 6 && media < 7.5) {
        printf("Conceito: B\n");
    } else if (media >= 7.5 && media < 9) {
        printf("Conceito: A\n");
    } else {
        printf("Conceito: E\n");
    }
    
    return 0;
}