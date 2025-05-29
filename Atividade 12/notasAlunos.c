#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[21];
    char matricula[9];
    float mediaFinal;
} ALUNOS;

void leAlunos(ALUNOS t[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nome: ");
        fgets(t[i].nome, 21, stdin);
        printf("Matricula: ");
        fgets(t[i].matricula, 21, stdin);
        printf("Media final: ");
        scanf("%f%*c", &t[i].mediaFinal);
    }
}

void imprime(ALUNOS t[], int n) {
    printf("\n===========================");
    printf("\n**** Impressao de Dados ****");
    printf("\n===========================\n");
    for (int i = 0; i < n; i++){
        printf("\nALUNO %d\n", (i + 1));
        printf("Nome: %sMatricula: %sMedia final: %.2f\n", t[i].nome, t[i].matricula, t[i].mediaFinal);
    }
}

int main() {
    ALUNOS t[5];
    leAlunos(t, 5);
    imprime(t, 5);
    return 0;
}