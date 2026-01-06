#include <stdio.h>
int main (void) {
    char input;
    scanf("%c", &input);

    if (input >= 48 && input <= 57)
        printf("%c is a number.\n", input);
    else if (input >= 65 && input <= 90)
        printf("%c is a capital letter.\n", input);
    else if (input >= 97 && input <= 122)
        printf("%c is a lowercase letter.\n", input);
    else 
        printf("%c is a punctuation.\n", input);

    return 0;
}