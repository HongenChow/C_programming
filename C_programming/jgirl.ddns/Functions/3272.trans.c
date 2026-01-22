#include "trans.h"
#include <stdlib.h>
#include <stdint.h>
void trans(long long int wheel[], int n, int t) { 
    uint64_t total_bits = (uint64_t)n * 64ULL;
    uint64_t k = (uint64_t) t % total_bits;
    if (k == 0) return;

    int q = (int) (k / 64ULL);
    int r = (int) (k % 64ULL);

    uint64_t *src = (uint64_t *)wheel;
    uint64_t *tmp = (uint64_t *) malloc ((size_t)n * sizeof(uint64_t));
    if (!tmp) return;

    if (r == 0) {
        for (int i = 0; i < n; i++) {
            tmp[i] = src[(i + q) % n];
        }
    } else {
        int s = 64 - r;
        for (int i = 0; i < n; i++) {
            uint64_t a = src[(i + q) % n];
            uint64_t b = src[(i + q + 1) % n];
            tmp[i] = (a << r) | (b >> s);
        }
    }

    for (int i = 0; i < n; i++) 
    src[i] = tmp[i];
    free(tmp);
}