#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} PONTO;

double calcularDistancia(PONTO q, PONTO p) {
    return sqrt(
        pow((q.x - p.x), 2) + pow((q.y - p.y), 2)
    );
}

int main() {
    PONTO q, p;
    printf("Digite a posicao do ponto Q: ");
    scanf("%lf %lf", &q.x, &q.y);
    printf("Digite a posicao do ponto P: ");
    scanf("%lf %lf", &p.x, &p.y);

    printf("A distancia entre os pontos eh %.2lf", calcularDistancia(q, p));
    return 0;
}