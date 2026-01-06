#include <stdio.h>
#include <string.h>
int main (void) {
    int N;
    scanf("%d", &N);

    char string[1024][1024];
    char score[1024] = {0};
    int count = 0;

    for (int i = 0; i < N; i++) {
        char input[1024];
        scanf("%s", input);

        char *start = input;
        while (*start != '\0') {
            if (*start >= 'a' && *start <= 'z')
                *start -= 32;
            score[count] += (*start - 64);
            start++;
        }
        strcpy(string[i], input);
        count++;
    }

    int highest_length = 0;
    char highest_string[1024];
    for (int i = 0; i < count; i++) {
        printf("%s = %d\n", string[i], score[i]);
        if (score[i] > highest_length) {
            highest_length = score[i];
            strcpy(highest_string, string[i]);
        }
        else if (score[i] == highest_length) 
            if (strcmp(string[i], highest_string) < 0) 
                strcpy(highest_string, string[i]);
    }

    printf("%s is the key.", highest_string);
    return 0;
}