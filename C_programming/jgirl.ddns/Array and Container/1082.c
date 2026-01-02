#include <stdio.h>
#include <stdlib.h>
int compare (const void *a, const void *b) {
    return (*(const int *)a - *(const int *)b);
}
int main (void) {
    int N;
    scanf("%d", &N);

    int number[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &number[i]);
    }

    int K;
    scanf("%d", &K);

    int delete_pos[K];
    for (int i = 0; i < K; i++) {
        scanf("%d", &delete_pos[i]);
    }

    qsort(delete_pos, K, sizeof(int), compare);
    int sum = 0, j = 0;
    int max = 0, max_pos;
    for (int i = 0; i < N; i++) {
        if (j < K && delete_pos[j] == i + 1) {
            j++;
            continue;
        }
        sum += number[i];
        if (number[i] > max) {
            max = number[i];
            max_pos = i + 1;
        }
    }
    printf("%d\n%d %d", sum, max_pos, max);
    return 0;
}