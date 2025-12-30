#include <stdio.h>
#include <string.h>
int main (void) {
    int K, L;
    scanf("%d%d", &K, &L);

    int min_K = 0, min_L = 0;
    while (1) {
    char subject[1024], score[16], type;
    int number;
    scanf(" %[^,]", subject);
    if (strcmp(subject, "q") == 0)
        break;
    scanf(",%[^,],%c,%d", score, &type, &number);
    if (strcmp(score, "F") == 0)
        continue;
    if (type == 'R')
        min_K += number;
    if (type == 'E')
        min_L += number;
    }

    if (min_K >= K && min_L >= L)
        printf("yes");
    else 
        printf("no");
    return 0;
}