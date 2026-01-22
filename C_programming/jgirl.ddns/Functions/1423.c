#include <stdio.h>
#define PI 3.14159265359
void math (double radius) {
    printf("%.3f", (4 * PI * radius * radius));
    return;
}
int main (void) {
    double radius;
    scanf("%lf", &radius);

    math(radius);
    return 0;
}