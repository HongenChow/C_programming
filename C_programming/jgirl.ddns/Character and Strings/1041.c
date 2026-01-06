#include <stdio.h>
int main (void) {
    char input;
    scanf("%c", &input);

    char input_string1[1024];
    scanf("%s\n", input_string1);

    char input_string2[1024];
    fgets(input_string2, sizeof(input_string2), stdin);

    printf("%c\n%s\n%s", input, input_string1, input_string2);
    return 0;
}