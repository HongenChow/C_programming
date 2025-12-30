#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);

    int sum = 0;
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}