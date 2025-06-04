#include <stdio.h>

int main() {
    int x = 3, y;
    y = x * (x + 1) * (x+1);
    printf("x = %d e y = %d\n", x, y);
    
    x = 5;
    y = 3;
    y = y * (x + 1);
    printf("x = %d e y = %d\n", x, y);
}