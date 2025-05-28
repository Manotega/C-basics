#include <stdio.h>

void minmax(float v[], int n, float *a, float *b) {
    float min = v[0], max = v[0];
    for (int i = 0; i < n; i++) {
        if (*(v + i) < min) {
            min = *(v + i);
        }
        if (*(v + i) > max) {
            max = *(v + i);
        }
    }
    *a = min;
    *b = max;
}

int main() {
    float v[5] = {1, 50, 3, 85, -6};
    float a, b;
    int n = 5;
    minmax(v, n, &a, &b);

    printf("O MENOR valor do vetor eh %.2f, e o MAIOR eh %.2f", a, b);
    return 0;
}