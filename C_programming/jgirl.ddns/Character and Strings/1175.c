#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare (const void *a, const void *b) {
    const char *s1 = a;
    const char *s2 = b;
    return strcmp(s1, s2);
}
int main (void) {
    int N;
    scanf("%d", &N);

    char string[1024][1024];
    for (int i = 0; i < N; i++)
        scanf("%s", string[i]);

    qsort(string, N, sizeof(string[0]), compare);
    for (int i = 0; i < N; i++)
        printf("%s ", string[i]);
    return 0;
}