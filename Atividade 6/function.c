#include <stdio.h>

double max(double a, double b) {
    if ( a>b ) {
        return a;
    }
    return b;
}

int main() {
    int n = max(10, 20);
    if (n == 20) {
        printf("CORRETO!");
    } else {
        printf("ERRADO!");
    }
}