#include <stdio.h>
int main (void) {
    int num, sum = 0, count = 0;
    while (1) {
        scanf("%d", &num);
        if (num == -1)
            break;
        sum += num;
        count++;
    }

    float avg = (float) sum / count;
    printf("%d\n%.1f", sum, avg);
    return 0;
}