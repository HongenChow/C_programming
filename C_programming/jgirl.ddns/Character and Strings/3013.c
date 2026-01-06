#include <stdio.h>
#include <string.h>
int main (void) {
    char string[1024];
    fgets(string, sizeof(string), stdin);

    char search[1024];
    scanf("%s", search);

    char *start = string;
    char *find = strstr(start, search);
    while (find != NULL) {
        printf("%d\n", find - string);
        start = find + strlen(search);
        find = strstr(start, search);    
    }
    return 0;
}