#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    char C1;
    scanf(" %c", &C1);

    double F;
    scanf("%lf", &F);

    getchar();
    
    char s1[1024];
    fgets(s1, sizeof(s1), stdin);

    char C2;
    scanf(" %c", &C2);

    char s2[1024];
    scanf("%s", s2);

    char *start = s1;
    while (*start != '\0') {
        if (*start >= 'A' && *start <= 'Z')
            *start += 32;
        start++;
    }

    start = s2;
    while (*start != '\0') {
        if (*start >= 'a' && *start <= 'z')
            *start -= 32;
        start++;
    }

    printf("%.2f\n", (double) N + F);
    printf("%c %d\n", C1 + N, (int) C1 + N);
    printf("%c %d\n", C2 + (int) F, (int) C2 + (int) F);
    printf("%s", s1);
    printf("%s\n", s2);
    return 0;
}