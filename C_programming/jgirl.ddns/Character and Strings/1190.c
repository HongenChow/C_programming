#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (void) {
    char string[1024];
    scanf("%[^\n]", string);

    char *start = string;
    int count = 0;

    bool is_uppercase = true;
    while (*start != '\0') {
        if (!(*start >= 65 && *start <= 90)) {
            is_uppercase = false;
            break;
        }
        start++;
    }

    if (is_uppercase) {
        printf("\"%s\" is a uppercase string.\n", string);
        char *tolower = string;
        while (*tolower != '\n' && *tolower != '\0') {
            *tolower += 32;
            tolower++;
        }
        printf("swap to lowercase string \"%s\".", string);
        return 0;
    }
        
    bool is_lowercase = true;
    start = string;
    while (*start != '\0') {
        if (!(*start >= 97 && *start <= 122)) {
            is_lowercase = false;
            break;
        }
        start++;
    }

    if (is_lowercase) {
        printf("\"%s\" is a lowercase string.\n", string);
        char *tolower = string;
        while (*tolower != '\n' && *tolower != '\0') {
            *tolower -= 32;
            tolower++;
        }
        printf("swap to uppercase string \"%s\".", string);
        return 0;
    }

    bool is_alphabetcase = true;
    start = string;
    while (*start != '\0') {
        if (!(*start >= 'a' && *start <= 'z' || *start >= 'A' && *start <= 'Z')) {
            is_alphabetcase = false;
            break;
        }
        start++;
    }

    if (is_alphabetcase) {
        printf("\"%s\" is an alphabet string.", string);
        return 0;
    }

    bool is_digitalcase = true;
    start = string;
    while (*start != '\0') {
        if (!(*start >= '0' && *start <= '9')) {
            is_digitalcase = false;
            break;
        }
        start++;
    }

    if (is_digitalcase) {
        printf("\"%s\" is an digital string.", string);
        return 0;
    }

    bool is_alphanumericcase = true;
    start = string;
    while (*start != '\0') {
        if (!(*start >= 'a' && *start <= 'z' || *start >= 'A' && *start <= 'Z' || *start >= '0' && *start <= '9')) {
            is_alphanumericcase = false;
            break;
        }
        start++;
    }

    if (is_alphanumericcase) {
        printf("\"%s\" is an alphanumeric string.", string);
        return 0;
    }

    bool is_whitespacecase = true;
    start = string;
    while (*start != '\0') {
        if (!(*start == ' ')) {
            is_whitespacecase = false;
            break;
        }
        start++;
    }

    if (is_whitespacecase) {
        printf("\"%s\" is a string that all the characters are whitespaces.", string);
        return 0;
    }

    printf("\"%s\" is a normal string.", string);
    return 0;
}