#include <stdio.h>
#include <string.h>
int main (void) {
    while (1) {
        char input[1024];
        fgets(input, sizeof(input), stdin);

        if (strcmp(input, "-1\n") == 0)
            return 0;
        char *start = input;
        while(*start != '\n') {
            if (*start >= 'a' && *start <= 'z')
                *start -= 32;
            start++;
        }

        printf("%s", input);
    }
    return 0;
}