#include <stdio.h>
#include <string.h>
int main (void) {
    char input[1024];
    fgets(input, sizeof(input), stdin);

    char *start = input;
    while (*start != '\0') {
        char *gcc = strstr(input, "gcc");
        char *gpp = strstr(input, "g++");
        char *change_name = strstr(input, "-o");
        char *level = strstr(input, "-O2");
        if (gcc != NULL || gpp != NULL) {
            if (change_name == NULL) {
                printf("run file name:a.out");
                if (level != NULL)
                    printf(" -O2");
                break;
            }
            else if (change_name != NULL) {
                char *stop = change_name + 4;
                while (*stop != '\0') {
                    if (*stop == ' ' || *stop == '\n') {
                        *stop = '\0';
                        break;
                    }
                    stop++;
                }
                printf("run file name:%s", change_name + 3);
                if (level != NULL)
                    printf(" -O2");
                break;
            }
        }
    } 
    
}