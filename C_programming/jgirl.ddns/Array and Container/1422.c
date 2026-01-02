#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    const char *s1 = (const char *)a;
    const char *s2 = (const char *)b;
    return strcmp(s1, s2);
}
int main (void) {
    char string1[128], string2[128];
    scanf("%s", string1);
    scanf("%s", string2);

    char word[32][128];
    int wordcount = 0;
    char *start = string1;
    char delimeters1[] = ";";
    start = strtok(string1, delimeters1);
    while (start != NULL) {
        char temp[128];
        bool exist = false;
        strcpy(temp, start);
        for (int i = 0; i < wordcount; i++)
            if (strcmp(temp, word[i]) == 0)
                exist = true;
        if (!exist) {
            strcpy(word[wordcount], start);
            wordcount++;
        }
        start = strtok(NULL, delimeters1);
    }

    start = string2;
    char delimeters2[] = ",";
    start = strtok(string2, delimeters2);
    while (start != NULL) {
        char temp[128];
        bool exist = false;
        strcpy(temp, start);
        for (int i = 0; i < wordcount; i++)
            if (strcmp(temp, word[i]) == 0)
                exist = true;
        if (!exist) {
            strcpy(word[wordcount], start);
            wordcount++;
        }
        start = strtok(NULL, delimeters2);
    }

    qsort(word, wordcount, sizeof(word[0]), compare);
    for (int i = 0; i < wordcount; i++)
        printf("%s ", word[i]);
    return 0;
}