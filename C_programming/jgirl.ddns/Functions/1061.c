#include <stdio.h>
int sum1 (int input) {
    int value = 0;
    for (int i = 1; i <= input; i++)
        value += i;
    return value;
}
int main (void) {
    int n;
    scanf("%d", &n);

    int ans = sum1(n);
    printf("%d", ans);
    return 0;
}