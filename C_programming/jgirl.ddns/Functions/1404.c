#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846
void math (double n) {
    printf("%.2f\n%.2f", sqrt(n) * sqrt(n) * sqrt(n), (double) PI * (n / 2) * (n / 2));
    return;
}

int main (void) {
    double n;
    scanf("%lf", &n);

    math(n);
    return 0;
}