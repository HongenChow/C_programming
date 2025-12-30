#include <stdio.h>
int main (void) {
    int x;
    scanf("%d", &x);

    int bottle = x, cover = 0;
    int i = 1;
    while (i <= x) {
        cover++;
        if (cover % 4 == 0) {
            bottle++;
            cover = 1;
        }
        i++;
    }
    if (cover % 3 == 0)
        bottle++;
    printf("%d\n", bottle);
    return 0;
}