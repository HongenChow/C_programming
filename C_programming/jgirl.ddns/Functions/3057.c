#include <stdio.h>
#include <math.h>
void inverse (double array[2][2]) {
    double det = array[0][0] * array[1][1] - array[0][1] * array[1][0];
    if (det == 0) {
        printf("none");
        return;
    }

    if (round(array[1][1] / det * 10) / 10 == 0)
        printf("0.0 ");
    else if (round(array[1][1] / det * 10) / 10 < 0)
        printf("%.1f ",  trunc(array[1][1] / det * 10) / 10);
    else 
        printf("%.1f ",  round(array[1][1] / det * 10) / 10);
    
    if (round(-array[0][1] / det * 10) / 10 == 0)
        printf("0.0\n");
    else if (round(-array[0][1] / det * 10) / 10 < 0)
        printf("%.1f\n", trunc(-array[0][1] / det * 10) / 10);
    else
        printf("%.1f\n",  round(-array[0][1] / det * 10) / 10);
    
    if (round(-array[1][0] / det * 10) / 10 == 0)
        printf("0.0 ");
    else if (round(-array[1][0] / det * 10) / 10 < 0)
        printf("%.1f ", trunc(-array[1][0] / det * 10) / 10);
    else
        printf("%.1f ", round(-array[1][0] / det * 10) / 10);
    
    if (round(array[0][0] / det * 10) / 10 == 0)
        printf("0.0");
    else if (round(array[0][0] / det * 10) / 10 < 0)
        printf("%.1f", trunc(array[0][0] / det * 10) / 10);
    else
        printf("%.1f", round(array[0][0] / det * 10) / 10);

    return;
}
int main (void) {
    double array[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &array[i][j]);
        }

    inverse(array);
    return 0;
}