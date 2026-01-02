#include <stdio.h>
int main (void) {
    int first, diff, n;
    scanf("%d%d%d", &first, &diff, &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += first;
        if (first >= 0)
            printf("%d", first);
        else
            printf("(%d)", first);
        if (i != n - 1)
            printf(" + ");
        else
            printf(" = ");

        first += diff;
    }
    printf("%d", sum);
    return 0;
}