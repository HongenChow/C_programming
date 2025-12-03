#include <stdio.h>
int main (void) {
    int top, base, height;
    scanf("%d%d%d", &top, &base, &height);
    float area = (float)(top + base) * height / 2;
    printf("%.1f", area);
    return 0;
}