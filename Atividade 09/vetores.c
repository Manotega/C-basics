#include <stdio.h>

int main() {
    // double prices[] = {5.0, 10.0, 15.0, 25.0};

    // double prices[3];
    // prices[0] = 5.00;
    // prices[1] = 10.00;
    // prices[2] = 15.00;

    double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};
    // The last 5 items are empty
    prices[4] += 10.0;
    printf("$%.2lf", prices[4]);
    return 0;
}