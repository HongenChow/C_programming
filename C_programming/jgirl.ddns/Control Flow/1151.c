#include <stdio.h>
int main (void) {
    int N, count = 0;
    int num[64];
    while (1) {
        scanf("%d", &N);
        if (N == -1)
            break;
        num[count++] = N;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d\n", num[i]);
        for (int j = 0; j < num[i]; j++)
            printf("\n");
    }
    printf("--------------------");
    return 0;
}