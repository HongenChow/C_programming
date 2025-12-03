#include <stdio.h>
int main (void) {
    int N, X, Y;
    scanf("%d%d%d", &N, &X, &Y);

    int temp = 20;
    if (N % 2 == 0) {
        for (int i = 0; i < N / 2; i++)
            temp += X;
        for (int i = 0; i < N / 2 - 1; i++)
            temp -= Y;
    }
    else {
        for (int i = 0; i < N / 2 + 1; i++)
            temp += X;
        for (int i = 0; i < N / 2; i++)
            temp -= Y;
    }
    printf("%d", temp);
    return 0;
}