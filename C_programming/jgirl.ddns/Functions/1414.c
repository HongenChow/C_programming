#include <stdio.h>
#define PI 3.14159265358979323846
void math(double n1) {
    double volume = (double) 4 / 3 * PI * n1 * n1 * n1;
    printf("%.3f", volume);
    return;
}
int main (void) {
    double n1;
    scanf("%lf", &n1);

    math(n1);
    return 0;
}