#include <stdio.h>
#define max 10

void obtem(float notas[][2], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        for(int j = 0; j < 2; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

float media(float v[], int n) {
    float soma = 0;
    for(int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}

int conta(float v[], int n, float m) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] > m) {
            total++;
        }
    }
    return total;
}

int main() {
    float notas[max][2], medias[max], media_turma;

    obtem(notas, max);

    for(int i = 0; i < max; i++) {
        medias[i] = (notas[i][0] + notas[i][1]) / 2;
    }

    media_turma = media(medias, max);

    printf("\n--- Resultados ---\n");
    for(int i = 0; i < max; i++) {
        printf("Aluno %d - Média: %.2f - ", i + 1, medias[i]);
        if(medias[i] > media_turma)
            printf("Acima da média\n");
        else if(medias[i] < media_turma)
            printf("Abaixo da média\n");
        else
            printf("Na média\n");
    }

    printf("\nMédia da turma: %.2f\n", media_turma);
    printf("Total acima da média: %d\n", conta(medias, max, media_turma));

    return 0;
}