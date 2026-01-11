#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int N, K;
    scanf("%d%d", &N, &K);

    int *ptr = (int *) malloc (sizeof(int) * N);
    for (int i = 0; i < N; i++) 
        scanf("%d", &ptr[i]);

    if ((N % 2) != 0) {
        printf("%d\n", ptr[N / 2]);
        if (K > ptr[N / 2]) 
            printf("WINNER WINNER CHICKEN DINNER!\n");
        else
            printf("BETTER LUCK NEXT TIME!\n");
    }
    else {
        printf("%d\n", ptr[(N / 2) - 1]);
        if (K > ptr[(N / 2) - 1])
            printf("WINNER WINNER CHICKEN DINNER!\n");
        else
            printf("BETTER LUCK NEXT TIME!\n");
    }
    free(ptr);
    return 0;
}