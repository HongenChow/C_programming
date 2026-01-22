#include <stdio.h>
int P (int n, int m) {
    int value = 1;
    for (int i = 0; i < m; i++) 
        value *= (n - i); 
    return value;
}

int C (int pmt, int m) {
    while (m != 0) {
        pmt /= m;
        m--;
    }
    return pmt;
}

int main (void) {
    int n, m;
    scanf("%d%d", &n, &m);

    int pmt = P(n, m);
    int cmb = C(pmt, m);
    printf("%d\n%d", pmt, cmb);
    return 0;
}