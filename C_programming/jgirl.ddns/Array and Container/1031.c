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
    printf("highest:\n");
    int highest = score[0];
    if (highest > score[1] && highest > score[2]) 
        printf("%d: %d\n", 1, score[0]);
    else if (highest > score[1] && highest < score[2])
        printf("%d: %d\n", 3, score[2]);
    else 
        printf("%d: %d\n", 2, score[1]);
    return 0;
}