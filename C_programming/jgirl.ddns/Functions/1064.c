#include <stdio.h>
int fact (int number) {
    int value = 1;
    if (number == 0)
        return 0;
    for (int i = 1; i <= number; i++)
        value *= i;
    return value;
}
int main (void) {
    int n;
    scanf("%d", &n);

    int ans = fact(n);
    printf("%d", ans);
    return 0;
}