#include <stdio.h>
int main (void) { 
    int pwd;
    scanf("%d", &pwd);

    if (pwd <= 0 || pwd >= 2000000000) {
        printf("Wrong Password Setting!");
        return 0; 
    }

    int input;
    while (scanf("%d", &input)) {
        if (input == pwd) {
            printf("Correct!");
            return 0;
        }
        else printf("Wrong Password!\n");
    }
}