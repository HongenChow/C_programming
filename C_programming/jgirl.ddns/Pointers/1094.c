#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare (const void *a, const void *b) {
    const char *s1 = *(char **)a;
    const char *s2 = *(char **)b;
    return strcmp(s1, s2);
}
int main (void) {
    int N;
    scanf("%d", &N);

    char **ptr = malloc (sizeof(char *) * N);
    for (int i = 0; i < N; i++) {
        ptr[i] = malloc(128);
        scanf("%s", ptr[i]);
    }

    qsort(ptr, N, sizeof(char *), compare);

    for (int i = 0; i < N; i++) {
        printf("%s ", ptr[i]);
        free(ptr[i]);
    }
    free(ptr);
    return 0;
}