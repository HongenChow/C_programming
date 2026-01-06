#include <stdio.h>
#include <string.h>
int main (void) {
    float result = 0;
    while (1) {
        float input_fl;
        if (scanf("%f", &input_fl) == 1) {
            result += (input_fl - (int) input_fl);
            continue;
        }
        char input[1024];
        scanf("%s", input);
        if (strcmp(input, "q") == 0)
            break;
    }

    printf("%.2f", result);
    return 0;
}