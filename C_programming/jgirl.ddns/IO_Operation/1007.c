#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int sum = 0;
    while (N != 0) {
        sum += N % 10;
        N /= 10;
    }

    printf("%d", sum);
    return 0;
}