#include <stdio.h>
int P (int n, int m) {
    int value = 1;
    for (int i = 0; i < m; i++) 
        value *= (n - i); 
    return value;
}

int main (void) {
    int n, m;
    scanf("%d%d", &n, &m);

    int ans = P(n, m);
    printf("%d", ans);
    return 0;
}