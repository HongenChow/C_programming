#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int *ptr = (int *) malloc (sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", ptr + i);

    for (int i = N - 1; i >= 0; i--)
        printf("%d ", *(ptr + i));
    free(ptr);
    return 0;
}