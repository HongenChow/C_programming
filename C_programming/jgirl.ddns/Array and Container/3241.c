#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    int count = 0;
    int l;
    for (int i = 0; i < N; i++) {
        l = A[i];
        for (int j = i + 1; j < N; j++) {
            if (j != i + 1)
                l ^= A[j - 1];
            int r = A[j];
            for (int k = j; k < N; k++) {
                if (k != j)
                    r ^= A[k];
                if (l == r) {
                    printf("(i: %d,j: %d,k: %d)\n", i, j, k);
                    count++;
                }
            }
        }
    }    
    printf("%d", count);
    return 0;
}