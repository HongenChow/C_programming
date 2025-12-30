#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int value[N], max = 0, min = 1000000;
    int pos_max, pos_min, last_pos_max = 0, last_pos_min = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &value[i]);
        if (value[i] > max) {
            max = value[i];
            last_pos_max = pos_max = i + 1;
        }
        else if (value[i] == max) 
            last_pos_max = i + 1;
        if (value[i] < min) {
            min = value[i];
            last_pos_min = pos_min = i + 1;
        }
        else if (value[i] == min)
            last_pos_min = i + 1;
    }

    printf("%d %d", max, pos_max);
    if (last_pos_max != pos_max)
        printf(" %d", last_pos_max);
    printf("\n");
    printf("%d %d", min, pos_min);
    if (last_pos_min != pos_min)
        printf(" %d", last_pos_min);
    return 0;
}