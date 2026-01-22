#include "gcd.h"
int gcd (int a, int b) {
    while (a % b != 0) {
        int temp = a % b;
        a = b; 
        b = temp;
    }
    return b;
}