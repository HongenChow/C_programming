#include <stdio.h>
#include <string.h>
int main (void) {
    char input_string1[1024];
    fgets(input_string1, sizeof(input_string1), stdin);
    
    char *start = input_string1;
    char *stop = input_string1;
    char string[1024][1024];
    int count = 0;
    while (*start != '\0') {
        if (*start == ' ' || *start == '\n') {
            *start = '\0';
            strcpy(string[count++], stop); 
            stop = start + 1;
        }
        start++;
    }

    printf("[");
    for (int i = 0; i < count; i++) {
        if (i != count - 1)
            printf("'%s', ", string[i]);
        else
            printf("'%s']\n", string[i]);
    }

    char input_string2[1024];
    fgets(input_string2, sizeof(input_string2), stdin);

    start = input_string2;
    int count_a = 0;
    while (*start != '\0') {
        if (*start == 'a')
            count_a++;
        start++;
    }

    printf("%d\n", count_a);

    char input_string3[1024];
    fgets(input_string3, sizeof(input_string3), stdin);

    start = strstr(input_string3, "fly");
    if (start == NULL)
        printf("-1\n");
    else
        printf("%d\n", start - input_string3);
    

    char input_string4[1024];
    fgets(input_string4, sizeof(input_string4), stdin);

    start = input_string4;
    while (*start != '\0') {
        if (*start == 'z')
            *start = 'o';
        if (*start == 'x')
            *start = 'a';
        start++;
    }
    
    printf("%s", input_string4);
    return 0;
}