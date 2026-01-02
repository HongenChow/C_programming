#include <stdio.h>
int main (void) {
    int count;
    scanf("%d", &count);
    int score[count], sum = 0;
    for (int i = 0; i < count; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    float avg = (float) sum / count;
    printf("avg = %.2f\n", avg);
    printf("fail:\n");
    for (int i = 0; i < count; i++) 
        if (score[i] < 60) {
            printf("%d: %d\n", i+1, score[i]);
        }
    printf("highest:\n");
    int highest = score[0], num = 0;
    for (int i = 1; i < count; i++)
        if (score[i] > highest) {
            highest = score[i];
            num = i+1;
        }
    printf("%d: %d", num, highest);
    return 0;
}