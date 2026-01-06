#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main (void) {
    while (1) {
        char file[1024];
        scanf("%s", file);

        if (strcmp(file, "-1") == 0)
            return 0;

        bool exist = false;
        char *find = strstr(file, ".py");
        if (find != NULL) { 
            exist = true;
            printf("%s\n", file);
        }
    }
    return 0;
}