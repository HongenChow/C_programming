#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int N;
    scanf("%d", &N);

    char **str = malloc (sizeof(char *) * N);
    for (int i = 0; i < N; i++) {
        str[i] = malloc(18);
        scanf("%s", str[i]);
    }
        
    int input;
    while (scanf("%d", &input) != EOF) {
        printf("%s\n", str[input]);
    }

    for (int i = 0; i < N; i++)
        free(str[i]);
    free(str);
    return 0;
}