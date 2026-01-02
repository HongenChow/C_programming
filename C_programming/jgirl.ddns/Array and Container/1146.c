#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int compare (const void *a, const void *b) {
    return (*(const int *)a - *(const int *)b);
}
int main (void) {
    int score[12], count = 0;
    for (int i = 0; i < 12; i++) {
        int input;
        if (scanf("%d", &input) == 1) {
            score[count++] = input;
            continue;
        }
        
        char input_none[16];
        scanf(" %s", input_none);
        if (strcmp(input_none, "none") == 0)
            continue;
    }

    qsort(score, count, sizeof(int), compare);
    int sum = 0;
    if (count >= 10)
    for (int i = count - 1; i >= count - 10; i--)
        sum += score[i];
    else
    for (int i = count; i >= 0; i--)
        sum += score[i];

    float result = (float) sum / 10;
    if ((int) round(result) >= 60)
        printf("%d\npass", (int) round(result));
    else
        printf("%d\nfail", (int) round(result));
    return 0;
}