#include <stdio.h>
#include <string.h>
int main (void) {
    char string[1024];
    fgets(string, sizeof(string), stdin);

    char *tolower = string;
    while (*tolower != '\0') {
        if (*tolower >= 'A' && *tolower <= 'Z')
            *tolower += 32;
        tolower++;
    }

    char search[1024];
    scanf("%s", search);
    tolower = search;
    while (*tolower != '\0') {
        if (*tolower >= 'A' && *tolower <= 'Z')
            *tolower += 32;
        tolower++;
    }

    char *start = string;
    char *find = strstr(start, search);
    while (find != NULL) {
        printf("%d\n", find - string);
        start = find + strlen(search);
        find = strstr(start, search);    
    }
    return 0;
}