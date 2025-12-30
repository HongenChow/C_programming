#include <stdio.h>
int main (void) {
    unsigned int N;
    scanf("%u", &N);

    int J, L;
    if (N >= 0 && N <= 540000) {
        J = 5;
        L = 0;
    } else if (N >= 540001 && N <= 1210000) {
        J = 12;
        L = 37800;
    } else if (N >= 1210001 && N <= 2420000) {
        J = 20;
        L = 134600;
    } else if (N >= 2420001 && N <= 4530000) {
        J = 30;
        L = 376600;
    } else if (N >= 4530001 && N <= 10310000) {
        J = 40;
        L = 829600;
    } else if (N >= 10310001) {
        J = 45;
        L = 1345100;
    }

    int K = N * J / 100;
    int M = K - L;
    printf("%d%% %d %d %d ", J, K, L, M);
    return 0;
}