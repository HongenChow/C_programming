#include <stdio.h>
#include <string.h>
int main (void) {
    char ans[16];
    scanf("%s", ans);

    while (1) {
        char input[16];
        scanf("%s", input);

        if (strcmp(ans, input) == 0) {
            printf("4A0B\n");
            printf("You Win!");
            return 0;
        }

        int A = 0, B = 0;
        char *start = ans;
        char *check = input;
        while (*check != '\0') {
            if (*check == *start)
                A++;
            else {
                char *checkB = ans;
                while (*checkB != '\0') {
                    if (*check == *checkB) {
                        B++;
                        break;
                    }
                    checkB++;
                }
            }
            check++;
            start++;
        }
        printf("%dA%dB\n", A, B);
    }
    return 0;
}