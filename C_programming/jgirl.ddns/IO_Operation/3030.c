#include <stdio.h>
#include <math.h>
int main (void) {
    float score;
    scanf("%f", &score);

    float adjust = sqrt(score) * 10;
    printf("Original: %.2f\n", score);
    printf("Adjusted: %.2f(+%d)\n", adjust,(int) round(adjust - score));
    return 0;
}