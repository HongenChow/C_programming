#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    if (N % 2 == 1)
        printf("Jerry");
    else
        printf("Tom");
    return 0;
}