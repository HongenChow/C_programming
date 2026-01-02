#include <stdio.h>
int main (void) {
    int student[5][3];
    student[0][0] = 76;
    student[0][1] = 73;
    student[0][2] = 85;
    student[1][0] = 88;
    student[1][1] = 84;
    student[1][2] = 76;
    student[2][0] = 92;
    student[2][1] = 82;
    student[2][2] = 92;
    student[3][0] = 82;
    student[3][1] = 91;
    student[3][2] = 85;
    student[4][0] = 72;
    student[4][1] = 74;
    student[4][2] = 73;

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