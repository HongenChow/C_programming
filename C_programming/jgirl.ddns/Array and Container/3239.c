#include <stdio.h>
int main (void) {
    int n, m;
    scanf("%d%d", &n, &m);

    int bicycle[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &bicycle[i]);

    int left, right;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &left, &right);
        int sum = 0;
        for (int j = left - 1; j < right; j++) 
            sum += bicycle[j];
        printf("%d\n", sum);
    }
    return 0;
}