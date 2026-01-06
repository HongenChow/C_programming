#include <stdio.h>
#include <stdbool.h>
int main (void) {
    char string[1024];
    while (scanf("%s", string) != EOF) {
        char *start = string;
        bool not_a_number = false;
        while (*start != '\0') {
            if (!(*start >= '0' && *start <= '9')) {
                printf("is not a number\n");
                not_a_number = true;
                break;
            }
        start++;
        }

        if (!not_a_number)
        printf("n=%s\n", string);
    }
    return 0;
}