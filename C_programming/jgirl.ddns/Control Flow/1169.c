#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int value[N], max = 0, min = 1000000;
    int pos_max, pos_min;
    for (int i = 0; i < N; i++) {
        scanf("%d", &value[i]);
        if (value[i] > max) {
            max = value[i];
            pos_max = i + 1;
        }
        if (value[i] < min) {
            min = value[i];
            pos_min = i + 1;
        }
    }
    printf("%d %d\n%d %d", max, pos_max, min, pos_min);
    return 0;
}