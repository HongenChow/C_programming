#include <stdio.h>
int main (void) {
    int num, sum = 0, count = 0, max = 0, max_pos = 0, min = 2000000000, min_pos = 0;
    while (1) {
        scanf("%d", &num);
        if (num == -1)
            break; 
        sum += num;
        count++;
        if (num > max) {
            max = num;
            max_pos = count;
        }
        if (num < min) {
            min = num;
            min_pos = count;
        }
    }

    float avg = (float) sum / count;
    printf("%d\n%.1f\n%d\n%d\n%d\n%d", sum, avg, max, max_pos, min, min_pos);
    return 0;
}