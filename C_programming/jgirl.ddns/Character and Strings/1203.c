#include <stdio.h>
#include <string.h>
int main (void) {
    int N;
    scanf("%d", &N);
    
    int agree = 0, disagree = 0, notsure = 0;
    for (int i = 0; i < N; i++) {
        char input[16];
        scanf("%s", input);
        if (strcmp(input, "yes") == 0 || strcmp(input, "no") == 0)
            agree++;
        else if (strcmp(input, "YES") == 0 || strcmp(input, "NO") == 0)
            disagree++;
        else
            notsure++;
    }

    printf("%d %d %d\n", agree, disagree, notsure);
    return 0;
}