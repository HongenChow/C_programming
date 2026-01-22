#include "prime.h"
bool IsPrime(int n) {
    int j = 2;
    while (j * j <= n) {
        if (n % j == 0)
            return 0;
        j++;
    }
    return 1;
}