#include <stdio.h>
#include <string.h>
int main (void) {
    char input1[1024];
    fgets(input1, sizeof(input1), stdin);

    char input2[1024];
    fgets(input2, sizeof(input2), stdin);

    char *start = input1;
    while (*start != '\0') {
        if (*start == '\n')
            *start = '\0';
        start++;
    }

    start = input2;
    while (*start != '\0') {
        if (*start == '\n')
            *start = '\0';
        start++;
    }

    if (strcmp(input1, input2) < 0) 
        printf("1<2\n");
    else  if (strcmp(input1, input2) == 0)
        printf("1==2\n");
    else if (strcmp(input1, input2) > 0)
        printf("1>2\n");    
    printf("%s%s\n", input1, input2);
    printf("%d\n", strlen(input1) + strlen(input2));
    return 0;
}