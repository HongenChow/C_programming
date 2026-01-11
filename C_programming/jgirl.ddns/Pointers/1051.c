#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int m, n;
    scanf("%d%d", &m, &n);

    int *arr[m];
    for (int i = 0; i < m; i++)
        arr[i] = (int *) malloc (sizeof(int) * n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) 
            scanf("%d", &arr[i][j]);
    
    long long sum = 0;
    for (int i = 0; i < m; i++) {
        printf("class %d\n", i + 1);
        long long temp_sum = 0;
        for (int j = 0; j < n; j++) {
            printf(" %d: %d\n", j + 1, arr[i][j]);
            temp_sum += arr[i][j];
        }

        double temp_avg = (double) temp_sum / n;
        printf(" avg: %.2f\n", temp_avg);
        sum += temp_sum;
    }

    double avg = (double) sum / m / n;
    printf("avg: %.2f", avg);

    for (int i = 0; i < m; i++)
        free(arr[i]);
    return 0;
}