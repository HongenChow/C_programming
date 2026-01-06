#include <stdio.h>
#include <string.h>
int main (void) {
    char input[1024];
    fgets(input, sizeof(input), stdin);

    char search[1024];
    scanf("%s", search);

    char *start = input;
    int count_case = 0;
    char *find = strstr(start, search);
    while (find != NULL) {
        count_case++;
        start = find + strlen(search);
        find = strstr(start, search);
    }
    
    char none[1024];
    strcpy(none, input);
    start = none;
    while (*start != '\0') {
        if (*start >= 'A' && *start <= 'Z')
            *start += 32;
        start++;
    }

    char new_search[1024];
    strcpy(new_search, search);
    start = new_search;
    while (*start != '\0') {
        if (*start >= 'A' && *start <= 'Z')
            *start += 32;
        start++;
    }
    start = none;
    int count_none = 0;
    find = strstr(start, new_search);
    while (find != NULL) {
        count_none++;
        start = find + strlen(new_search);
        find = strstr(start, new_search);
    }
    
    char *left = input;
    char *right = input + 1;
    char newstring[1024][1024];
    int count_newstring = 0;
    while (right > left && *right != '\0') {
        if (*right == ' ' || *right == '\n' || !(*right >= 'a' && *right <= 'z')) {
            *right = '\0';
            strcpy(newstring[count_newstring++], left);
            left = right + 1;
            right = left + 1;
            continue;
        }
        right++;
    }

    int count = 0;
    for (int i = 0; i < count_newstring; i++)
        if (strcmp(newstring[i], search) == 0)
            count++;
    printf("%d\n%d\n%d", count_case, count_none, count);
    return 0;
}