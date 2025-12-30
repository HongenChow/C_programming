#include <stdio.h>
int main (void) {
    int n;
    char c;
    int odd_sum = 0, even_sum = 0, sum = 0;
    while (scanf("%d", &n) == 1) {
        if (n % 2 == 0)
            even_sum += n;
        else
            odd_sum += n;
        sum += n;
        scanf("%c", &c);
    }
    printf("%d\n%d\n%d", odd_sum, even_sum, sum);
    return 0;
}