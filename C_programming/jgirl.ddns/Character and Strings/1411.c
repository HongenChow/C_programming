#include <stdio.h>
#include <string.h>
int main (void) {
    int count_int = 0, count_float = 0;
    while (1) {
        float input_fl;
        if (scanf("%f", &input_fl) == 1 )
            if ((input_fl - (int) input_fl) != 0) {
            count_float++;
            continue;
            }
            else {
            count_int++;
            continue;
            }

        char input_char[1024];
        scanf("%s", input_char);
        if (strcmp(input_char, "q") == 0)
            break;
    }

    printf("%d\n%d", count_float, count_int);
    return 0;
}