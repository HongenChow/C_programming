#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (void) {
    while (1) {
        char file[1024];
        scanf("%s", file);

        if (strcmp(file, "-1") == 0)
            return 0;

        char *find_txt = strstr(file, ".txt");
        if (find_txt != NULL) {
            printf("T00_%s\n", file);
            continue;
        }

        char *last_dot = strrchr(file, '.');
        if (last_dot && strcmp(last_dot, ".py") == 0) {
                *last_dot = '\0';
            printf("P00_%s.c\n", file);
            continue;
        }
    }
    return 0;
}