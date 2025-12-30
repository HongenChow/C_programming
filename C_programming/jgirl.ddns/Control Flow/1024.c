#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n - 1; i++)
        printf(" ");
    printf("*\n");

    for (int count = 0; count <= n - 3; count++)     
        for (int i = 1; i <= 3; i++) {
            for (int j = n - count - i; j >= 1; j--)
                printf(" ");
            for (int k = 1; k <= (i * 2 - 1) + count * 2; k++)
                printf("^");
            printf("\n");
        }

    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j < n / 2 + 1; j++)
            printf(" ");
        for (int k = 0; k <= n - 3; k++)
            printf("#");
        printf("\n");
    }
    return 0;
}