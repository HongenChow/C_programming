#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 0; i--) {
        for (int j = i - 1; j > 0; j--)
            printf("  ");
        if (i != 0)
            printf("__");
        for (int k = 0; k < N - i; k++)
            printf("||");
        printf("\n");
    }
    return 0;
}