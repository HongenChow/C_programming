#include <stdio.h>
int main (void) {

    char input[1024];
    fgets(input, sizeof(input), stdin);

    char *start = input;
    while(*start != '\n') {
        if (*start >= 'a' && *start <= 'z')
            *start -= 32;
        start++;
    }

    printf("%s", input);
    return 0;
}