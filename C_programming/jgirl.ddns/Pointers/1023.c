#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int *ptr = (int *) malloc (sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", ptr + i);

    int highest = 0, lowest = 10000;
    int pos_highest = 0, pos_lowest = 0;
    for (int i = 0; i < N; i++) {
        if (ptr[i] > highest) {
            highest = ptr[i];
            pos_highest = i + 1;
        }
        if (ptr[i] < lowest) {
            lowest = ptr[i];
            pos_lowest = i + 1;
        }
    }

    printf("%d %d\n", pos_highest, highest);
    printf("%d %d\n", pos_lowest, lowest);

    free(ptr);
    return 0;
}