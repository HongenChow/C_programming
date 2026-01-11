#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int *ptr = (int *) malloc (sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &ptr[i]);

    for (int i = 0; i < N; i += 2) {
        int temp = ptr[i];
        ptr[i] = ptr[i + 1];
        ptr[i + 1] = temp;
    }

    for (int i = 0; i < N; i++) 
        printf("%d ", ptr[i]);
    free(ptr);
    return 0;
}