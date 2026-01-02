#include <stdio.h>
int main (void) {
    int class[2][3];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) 
            scanf("%d", &class[i][j]);
    
    int sum[2] = {0, 0};
    float avg[2] = {0, 0};
    for (int i = 0; i < 2; i++) {
        printf("class %d\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf(" %d: %d\n", j + 1, class[i][j]);
            sum[i] += class[i][j];
        }
        printf(" sum: %d\n", sum[i]);
        avg[i] = (float) sum[i] / 3;
        printf(" avg: %.2f\n", avg[i]);
    }

    printf("total: %d, avg: %.2f", sum[0] + sum[1], (avg[0] + avg[1]) / 2);
    return 0;
}