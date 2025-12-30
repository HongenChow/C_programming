#include <stdio.h>
#include <stdbool.h>
int main (void) {
    int T, N, num;
    scanf("%d%d", &T, &N);

    bool found = false;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num == T) {
            printf("Found@%d\n", i+1);
            found = true;
        }
    }

    if (!found)
        printf("%d is not found.", T);
    return 0;
}