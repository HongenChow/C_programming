#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int *ptr = (int *) malloc (sizeof(int) * N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    double avg = (double) sum / N;
    int count = 0;
    for (int i = 0; i < N; i++) 
        if (ptr[i] > avg)
            count++;

    printf("%d", count);
    free(ptr);
    return 0;
}