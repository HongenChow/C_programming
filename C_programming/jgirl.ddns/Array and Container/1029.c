#include <stdio.h>
int main (void) {
    int score[3], sum = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    float avg = (float) sum / 3;
    printf("avg = %.2f\n", avg);
    printf("fail:\n");
    for (int i = 0; i < 3; i++) 
        if (score[i] < 60) {
            printf("%d: %d\n", i+1, score[i]);
        }
    return 0;
}