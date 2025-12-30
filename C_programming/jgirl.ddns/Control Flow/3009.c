#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);
    
    int mul = 1;
    for (int i = 1; i <= n; i++)
        mul *= i;
    printf("%d", mul);
    return 0;
}