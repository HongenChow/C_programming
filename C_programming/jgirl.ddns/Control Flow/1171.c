#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int value;
    scanf("%d", &value);
    int first_max = value, pos_first_max = 1;
    int last_pos_first_max = pos_first_max;
    int first_min = value, pos_first_min = 1;
    int last_pos_first_min = pos_first_min; 

    int second_max = 0, pos_second_max, last_pos_second_max;
    int second_min = 1000000, pos_second_min, last_pos_second_min;
    
    for (int i = 2; i <= N; i++) {
        scanf("%d", &value);
        if (value > first_max) {
            second_max = first_max;
            pos_second_max = pos_first_max;
            last_pos_second_max = last_pos_first_max;
            first_max = value;
            last_pos_first_max = pos_first_max = i;
        }
        else if (value == first_max) 
            last_pos_first_max = i;
        else if (value > second_max) {
            second_max = value;
            last_pos_second_max = pos_second_max = i;
        }
        else if (value == second_max)
            last_pos_second_max = i;

        if (value < first_min) {
            second_min = first_min;
            pos_second_min = pos_first_min;
            last_pos_second_min = last_pos_first_min;
            first_min = value;
            last_pos_first_min = pos_first_min = i;
        }
        else if (value == first_min)
            last_pos_first_min = i;
        else if (value < second_min) {
            second_min = value;
            last_pos_second_min = pos_second_min = i;
        }
        else if (value == second_min) {
            last_pos_second_min = i;
        }
    }

    if (second_max == 0) {
        second_max = first_max;
        pos_second_max = pos_first_max;
        last_pos_second_max = last_pos_first_max;
    }
    if (second_min == 1000000) {
        second_min = first_min;
        pos_second_min = pos_first_min;
        last_pos_second_min = last_pos_first_min;
    }
    printf("%d %d", first_max, pos_first_max);
    if (pos_first_max != last_pos_first_max)
        printf(" %d", last_pos_first_max);
    printf("\n");

    printf("%d %d", second_max, pos_second_max);
    if (pos_second_max != last_pos_second_max)
        printf(" %d", last_pos_second_max);
    printf("\n");
    
    printf("%d %d", first_min, pos_first_min);
    if (pos_first_min != last_pos_first_min)
        printf(" %d", last_pos_first_min);
    printf("\n");

    printf("%d %d", second_min, pos_second_min);
    if (pos_second_min != last_pos_second_min)
        printf(" %d", last_pos_second_min);
    printf("\n");
    
    return 0;
}