#include <stdio.h>
void return2num(int n, int *factRst, int *sumRst) {
    for (int i = 1; i <= n; i++)
        *sumRst += i;
    for (int i = 1; i <= n; i++)
        *factRst *= i;

    return;
}

int main (void) {
    int n;
    scanf("%d", &n);

    int fact = 1, sum = 0; 
    return2num(n, &fact, &sum);

    printf("%d\n%d", fact, sum);
    return 0;
}