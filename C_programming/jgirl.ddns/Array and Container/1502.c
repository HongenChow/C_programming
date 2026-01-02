#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int number[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &number[i]);

    int top = 0, below = 0;
    for (int i = 1; i < N - 1; i++) {
        if (number[i] > number[i+1] && number[i] > number[i-1])
            top++;
        if (number[i] < number[i+1] && number[i] < number[i-1])
            below++;
    }
    printf("%d\n%d\n", top, below);
    return 0;
}