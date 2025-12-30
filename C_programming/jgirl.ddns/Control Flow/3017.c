#include <stdio.h>
int main (void) {
    int num, sum = 0, count = 0, max = 0, pos = 0;
    while (1) {
        scanf("%d", &num);
        if (num == -1)
            break; 
        sum += num;
        count++;
        if (num > max) {
            max = num;
            pos = count;
        }
    }

    float avg = (float) sum / count;
    printf("%d\n%.1f\n%d\n%d", sum, avg, max, pos);
    return 0;
}