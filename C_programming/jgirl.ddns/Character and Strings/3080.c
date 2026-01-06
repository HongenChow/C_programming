#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (void) {
    int count_txt = 0;
    int count_py = 0;
    char txt[1024][1024];
    char py[1024][1024];
    while (1) {
        char file[1024];
        if (scanf("%s", file) != 1)
            break;

        if (strcmp(file, "-1") == 0)
            break;

        char *find_txt = strstr(file, ".txt");
        if (find_txt != NULL) {
            *file -= 32;
            strcpy(txt[count_txt++], file);
            continue;
        }

        char *last_dot = strrchr(file, '.');
        if (last_dot && strcmp(last_dot, ".py") == 0) {
            char *start = file;
            while (*start != '\0' && start < last_dot) {
                if (*start >= 'a' && *start <= 'z')
                    *start -= 32;
                start++;
            }
            strcpy(py[count_py++], file);    
            continue;
        }
    }

    if (count_txt != 0) {
        printf("[");
        for (int i = 0; i < count_txt; i++)
            if (i != count_txt - 1)
                printf("'T0%d_%s', ", i + 1, txt[i]);
            else
                printf("'T0%d_%s']\n", i + 1, txt[i]);
    }
    else 
        printf("[]\n");

    if (count_py != 0) {
        printf("[");
        for (int i = 0; i < count_py; i++)
            if (i != count_py - 1)
                printf("'P0%d_%s', ", i + 1, py[i]);
            else
                printf("'P0%d_%s']\n", i + 1, py[i]);
    }
    else
        printf("[]\n");
    return 0;
}