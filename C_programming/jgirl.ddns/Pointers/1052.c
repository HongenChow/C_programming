#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int N;
    scanf("%d", &N);
    int *ptr = (int *) malloc (sizeof(int) * N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    
    float avg = (float) sum / N;
    printf("avg = %.2f\n", avg);

    int highest = 0, pos = 0;
    printf("fail:\n");
    for (int i = 0; i < N; i++) {
        if (*(ptr + i) < 60)
            printf("%d: %d\n", i + 1, *(ptr + i));
        if (*(ptr + i) > highest) {
            highest = *(ptr + i);
            pos = i + 1;
        }
    }

    printf("highest:\n");
    printf("%d: %d", pos, highest);

    free(ptr);
    return 0;
}