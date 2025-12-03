#include <stdio.h>
int main (void) {
    int top = 10, base = 15, height = 7;
    float area = (float)(top + base) * height / 2;
    printf("%.1f", area);
    return 0;
}