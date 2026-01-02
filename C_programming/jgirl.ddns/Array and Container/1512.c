#include <stdio.h>
int main (void) {
    int N, K;
    scanf("%d%d", &N, &K);

    int pond[N], result = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &pond[i]);
        if (pond[i] > K)
            result += pond[i] / K * K;
    }
    printf("%d", result);
    return 0;
}