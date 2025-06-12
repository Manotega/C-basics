#include <stdio.h>
#define max 7
// Dado o seguinte programa, codifique as rotinas:
// obtem() -> obtem as temperaturas de cada dia da semana
// media() -> calcula a média da temperatura da semana
// conta() -> quantos dias estao acima da média

void obtem(float temp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do %do dia da semana: ", i+1);
        scanf("%f", &temp[i]);
    }
}

float media(float temp[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += temp[i];
    }
    return total / n;
}

int conta(float temp[], int n, float m) {
    int diasAcima = 0;
    for (int i = 0; i < n; i++) {
        if (temp[i] > m) {
            diasAcima += 1;
        }
    }
    return diasAcima;
}

int main() {
    float m;
    float temp[max];
    obtem(temp, max);
    m = media(temp, max);
    printf("Estatistica: %d", conta(temp, max, m) );
    return 0;
}