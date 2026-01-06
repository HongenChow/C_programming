#include <stdio.h>
#include <string.h>
int main (void) {
    char string[1024];
    int width;
    char trim[1024];
    while (1) {
        fgets(string, sizeof(string), stdin);
        strcpy(trim, string);

        char *left = trim;
        char *right = trim + strlen(trim) - 1;
        while (*left == ' ' || *left == '\t' || *left == '\n') {
            left++;
        }

        while (right > left && (*right == ' ' || *right == '\n' || *right == '\t')) {
            right--;
        }

        *(right + 1) = '\0';
        if (left != trim){
            memmove(trim, left, strlen(left) + 1);
        }

        if (strlen(trim) == 0) {
            printf("Please enter a non-empty title.\n");
            continue;
        }

        scanf("%d", &width);
        getchar();
        break;
    }

    char tmp[1024];
    strcpy(tmp, trim);
    printf("%s\n", tmp);

    char *start = tmp;
    if (*start >= 'a' && *start <= 'z')
        *start -= 32;
    start++;
    while (*start != '\0') {
        if (*start >= 'A' && *start <= 'Z')
            *start += 32;
        start++;
    }

    printf("%s\n", tmp);

    strcpy(tmp, trim);
    start = tmp;
    while (*start != '\0') {
        if (*start >= 'a' && *start <= 'z')
            *start -= 32;
        start++;
    }

    printf("%s\n", tmp);

    strcpy(tmp, trim);
    start = tmp;
    if (*start >= 'a' && *start <= 'z')
        *start -= 32;
    start++;
    while (*start != '\0') {
        if (*start >= 'A' && *start <= 'Z')
            *start += 32;
        if (*start >= 'a' && *start <= 'z' && *(start - 1) == ' ')
            *start -= 32;
        start++;
    }

    printf("%s\n", tmp);

    strcpy(tmp, trim);
    start = tmp;
    while (*start != '\0') {
        if (*start >= 'A' && *start <= 'Z')
            *start += 32;
        if (*start >= 'a' && *start <= 'z' && *(start + 1) == '\0')
            *start -= 32;
        start++;
    }

    printf("%s\n", tmp);
    
    strcpy(tmp, trim);
    int len = strlen(tmp);
    int pad = width - len;
    int left_pad = pad / 2;
    int right_pad = pad - left_pad;

    printf("%s", tmp);
    for (int i = 0; i < pad; i++)
        printf(" ");
    printf("\n");

    for (int i = 0; i < pad; i++)
        printf(" ");
    printf("%s\n", tmp);

    for (int i = 0; i < left_pad; i++)
        printf(" ");
    printf("%s", tmp);
    for (int i = 0; i < right_pad; i++)
        printf(" ");
    printf("\n");

    strcpy(tmp, string);
    char *left9 = tmp;
    while (*left9 == ' ' || *left9 == '\t' || *left9 == '\n')
        left9++;
    if (left9 != tmp){
        memmove(tmp, left9, strlen(left9) + 1);
    }
    printf("%s", tmp);

    strcpy(tmp, string);

    char *right10 = tmp + strlen(tmp) - 1;
    while (*right10 == ' ' || *right10 == '\n' || *right10 == '\t') {
        right10--;
    }

    *(right10 + 1) = '\0';
    printf("%s", tmp);
    return 0;
}