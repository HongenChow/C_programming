#include <stdio.h>
#include <string.h>
int main (void) {
    int longestlength = 0;
    char string[1024][1024];
    int count = 0;
    while (1) {
        char input[1024];
        fgets(input, sizeof(input), stdin);
        
        char *find = strchr(input, '\n');
        *find = '\0';
        if (strcmp(input, "-1") == 0)
            break;

        if (strlen(input) > longestlength)
            longestlength = strlen(input);

        strcpy(string[count++], input);
    }

    char symbol;
    scanf("%c", &symbol);

    for (int i = 0; i < longestlength + 2; i++)
        printf("%c", symbol);
    printf("\n");

    for (int i = 0; i < count; i++) {
        printf("%c", symbol);
        int temp_length = strlen(string[i]);
        printf("%s", string[i]);
        for (int j = 0; j < (longestlength - temp_length); j++)
            printf(" ");
        printf("%c\n", symbol);
    }
    for (int i = 0; i < longestlength + 2; i++)
        printf("%c", symbol);
    return 0;
}