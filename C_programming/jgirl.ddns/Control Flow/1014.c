#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        printf("%d", i);
        printf((i == n)? " = ": "+");
    }
    printf("%d", sum);
    return 0;
}