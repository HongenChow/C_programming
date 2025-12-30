#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = n - i; j > 0; j--) 
            printf(" ");
        for (int k = i; k >= 1; k--)
            printf("*");
        printf("\n");
    }
    return 0;
}