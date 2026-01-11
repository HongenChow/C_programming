#include <stdio.h>
#include <stdlib.h>
int compare (const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x - y);
}
int main (void) {
    int N;
    scanf("%d", &N);

    int *ptr = (int *) malloc (sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &ptr[i]);

    qsort(ptr, N, sizeof(int), compare);
    for (int i = 0; i < N; i++)
        printf("%d ", ptr[i]);
    free(ptr);
    return 0;
}