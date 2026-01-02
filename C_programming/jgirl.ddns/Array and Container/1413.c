#include <stdio.h>
#include <string.h>
int main (void) {
    char string[1024];
    scanf("%s", string);

    char word[40][1024];
    int wordcount = 0;
    char *start = string;

    while(start != NULL) {
        char *semicolon = strchr(start, ';');
        if (semicolon == NULL) {
            strcpy(word[wordcount], start);
            wordcount++;
            start = NULL;
        }
        else {
            strncpy(word[wordcount], start, semicolon - start);
            word[wordcount][semicolon - start] = '\0';
            wordcount++;
            start = semicolon + 1;
        }
    }

    for (int i = wordcount - 1; i >= 0; i--) {
        int length = strlen(word[i]);
        for (int j = 0; j < length / 2; j++) {
            char temp = word[i][j];
            word[i][j] = word[i][length - 1 - j];
            word[i][length - 1 - j] = temp;
        }
        printf("%s ", word[i]);
    }
    return 0;
}