#include <stdio.h>
int main (void) {
    char string[1024];
    scanf("%s", string);

    char *start = string;
    while (*start != '\0') {
        if (!(*start >= '0' && *start <= '9')) {
            printf("is not a number");
            return 0;
        }
        start++;
    }

    printf("n=%s", string);
    return 0;
}