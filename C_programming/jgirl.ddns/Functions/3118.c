#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
char *transform (int n, char lst[][8]) {
    char *translate = malloc (n + 1);
    for (int i = 0; i < n; i++) {
        if (strcmp(lst[i], "-----") == 0)
            translate[i] = '0';
        else if (strcmp(lst[i], ".----") == 0)
            translate[i] = '1';
        else if (strcmp(lst[i], "..---") == 0)
            translate[i] = '2';
        else if (strcmp(lst[i], "...--") == 0)
            translate[i] = '3';
        else if (strcmp(lst[i], "....-") == 0)
            translate[i] = '4';
        else if (strcmp(lst[i], ".....") == 0)
            translate[i] = '5';
        else if (strcmp(lst[i], "-....") == 0)
            translate[i] = '6';
        else if (strcmp(lst[i], "--...") == 0)
            translate[i] = '7';
        else if (strcmp(lst[i], "---..") == 0)
            translate[i] = '8';
        else if (strcmp(lst[i], "----.") == 0)
            translate[i] = '9';
        else {
            free(translate);
            char *err = malloc(6);
            strcpy(err, "error");
            return err;
        }
    }

    translate[n] = '\0';
    return translate;
}

int main (void) {
    int n = 0;
    char **ans = malloc(sizeof(char *) * 16);
    while (1) {
        char input[64];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "-1") == 0)
            break;
        if (input[0] == '\0')
            continue;
        int count = 0;
        char *start = input;
        char lst[16][8];
        while (start != NULL) {
            while (*start == ' ') start++;
            if (*start == '\0') break;

            int len = (int) strcspn(start, " ");
            if (len > 7) len = 7;
            strncpy(lst[count], start, len);
            lst[count++][len] = '\0';
            start += strcspn(start, " ");
        }

        ans[n++] = transform(count, lst);
        
    }

    for (int i = 0; i < n; i++) 
        printf("%s\n", ans[i]);
    return 0;
}