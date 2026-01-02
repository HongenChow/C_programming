#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(const int *)a - *(const int *)b);
}
int main (void) {
    int number[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &number[i]);

    qsort(number, 5, sizeof(int), compare);
    for (int i = 0; i < 5; i++)
        printf("%d ", number[i]);
    return 0;
}