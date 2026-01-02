#include <stdio.h>
#include <string.h>
int main (void) {
    char string[64];
    scanf("%s", string);

    char *start = string;
    while (start != NULL) {
        char *comma = strchr(start, ',');
        if (comma == NULL) {
            int length = strlen(start);
            for (int i = 0; i < length / 2; i++) {
                char temp = start[i];
                start[i] = start[length - 1 - i];
                start[length - 1 - i] = temp; 
            }
            start = NULL;
        }
        else {
            for (int i = 0; i < (comma - start) / 2; i++) {
                char temp = start[i];
                start[i] = start[comma - start - 1 - i];
                start[comma - start - 1 - i] = temp; 
            }
            start = comma + 1;
        }
    }

    printf("%s", string);
    return 0;
}