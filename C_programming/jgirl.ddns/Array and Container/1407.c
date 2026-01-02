#include <stdio.h>
int main (void) {
    int N, K;
    scanf("%d%d", &N, &K);

    int count = 0, sum = 0;
    for (int i = 0; i < N; i++) {
        int input;
        scanf("%d", &input);

        if (input < K) {
            sum += input;
            count++;
        }
    }
    printf("%d %d", count, sum);
    return 0;
}