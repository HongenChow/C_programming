#include <stdio.h>
int main (void) {
    char input[1024];
    fgets(input, sizeof(input), stdin);

    char *start = input;
    while (*start != '\0') {
        switch(*start) {
            case '0': {
                *start = 'O';
                break;
            }
            case '1': {
                *start = 'I';
                break;
            }
            case '3': {
                *start = 'E';
                break;
            }
            case '4': {
                *start = 'A';
                break;
            }
            case '5': {
                *start = 'S';
                break;
            }
            case '7': {
                *start = 'T';
                break;
            }
            case '\n': {
                *start = '\0';
                break;
            }
        }
        start++;
    }

    printf("%s", input);
    return 0;
}