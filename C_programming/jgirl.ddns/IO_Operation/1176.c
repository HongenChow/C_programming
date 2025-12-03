#include <stdio.h>
#define PI 3.141592653589793
int main (void) {
    int small_radius, large_radius;
    scanf("%d%d", &small_radius, &large_radius);

    float area_small = (float) PI * small_radius * small_radius;
    float area_large = (float) PI * large_radius * large_radius;
    printf("%.2f", area_large - area_small);
    return 0;
}