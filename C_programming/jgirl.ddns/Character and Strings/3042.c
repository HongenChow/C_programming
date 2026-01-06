#include <stdio.h>
#include <string.h>
int main (void) {
    char string[1024][1024];
    int count = 0;
    while (1) {
        char input[1024];
        scanf("%s", input);

        if (strcmp(input, "-1") == 0) 
            break;

        char *start = input;
        while (*start != '\0') {
            if (*start >= 'A' && *start <= 'Z')
                *start += 32;
            if (*start >= 'd' && *start <= 'z')
                *start -= 3;
            else if (*start == 'a')
                *start = 'x';
            else if (*start == 'b')
                *start = 'y';
            else if (*start == 'c')
                *start = 'z';
            start++;
        }   

        strcpy(string[count++], input);
    }

    for (int i = 0; i < count; i++)
        if (i != count - 1)
            printf("%s ", string[i]);
        else
            printf("%s", string[i]);
    return 0;
}