#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 1; j <= n / 2 - i; j++)
            printf(" ");
        for (int k = 1; k <= i * 2 + 1; k++)
            printf("*");
        printf("\n");
    }
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= i; j++)
            printf(" ");
        for (int k = 1; k <= n - i * 2; k++)
            printf("*");
        printf("\n");
    }
}