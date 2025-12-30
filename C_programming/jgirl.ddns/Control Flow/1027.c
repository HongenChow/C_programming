#include <stdio.h>
#include <string.h>
int main (void) {
    char pwd[100];
    scanf("%s", pwd);

    char input[100];
    while(scanf("%s", input)) {
        if (!(strcmp(input, pwd))) {
            printf("Correct!");
            return 0;
        }   
        printf("Wrong Password!\n");
    }
    return 0;
}