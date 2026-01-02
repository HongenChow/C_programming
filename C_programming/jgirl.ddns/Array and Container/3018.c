#include <stdio.h>
int main (void) {
    int student[5][3];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &student[i][j]);
        
    int sum[5] = {0};
    float avg[5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("student %d\n", i+1);
        for (int j = 0; j < 3; j++) {
            printf(" %d: %d\n", j+1, student[i][j]);
            sum[i] += student[i][j];
        }
        printf(" sum: %d\n", sum[i]);
        avg[i] = (float) sum[i] / 3;
        printf(" avg: %.2f\n", avg[i]);
    }

    int total = 0;
    float final_avg = 0;
    float highest_avg = avg[0];
    int num_highest_avg = 1;
    for (int i = 0; i < 5; i++) {
        total += sum[i];
        if (i != 0 && avg[i] > highest_avg) {
            highest_avg = avg[i];
            num_highest_avg = i + 1;
        }
    }
    final_avg = (float) total / 15;
    printf("total: %d, avg: %.2f\n", total, final_avg);
    printf("highest avg: student %d: %.2f", num_highest_avg, highest_avg);
    return 0;
}