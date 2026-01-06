#include <stdio.h>
#include <string.h>
int main (void) {
    char input[1024];
    scanf("%s", input);

    int length = strlen(input);
    if (length % 2 != 0) 
        printf("Please input a string with an even length.");
    else {
        for (int i = length - 1; i >= length / 2; i--)
            printf("%c", input[i]);
        for (int i = 0; i < length / 2; i++)
            printf("%c", input[i]);
    }
    return 0;
}