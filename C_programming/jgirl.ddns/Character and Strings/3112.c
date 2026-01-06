#include <stdio.h>
#include <string.h>
int main (void) {
    char string[1024];
    fgets(string, sizeof(string), stdin);

    char search[1024];
    scanf("%s", search);

    char *start = string;
    char *find = strstr(string, search);  
    while (find != NULL) {
        printf("%d\t%c%c+%s+%c%c\n", find - string, *(find - 2), *(find - 1), search, *(find + strlen(search)), *(find + strlen(search) + 1));
        start = find + strlen(search);
        find = strstr(start, search);
    }
    
    return 0;
}