#include <stdio.h>
int main (void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
        printf("True\n");
    else 
        printf("False\n");
    if (a < b && a < c)
        printf("True\n");
    else
        printf("False\n");
    if (!(a > b && a > c))
        printf("True\n");
    else 
        printf("False\n");
    if (!(a < b && a < c))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}