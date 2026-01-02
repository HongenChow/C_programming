#include <stdio.h>
#include <math.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int number[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &number[i]);

    if (N % 2 != 0) 
        printf("%d", number[N / 2]);
    else {
        float result = (float) (number[N / 2] + number[N / 2 - 1]) / 2;
        printf("%d", (int)round(result));
    }
    return 0;
}