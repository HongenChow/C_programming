#include <stdio.h>
int main (void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (!((a + b > c) && (a + c > b) && (b + c > a))) {
        printf("False");
        return 0;
    }
    
    printf("True\n");
    if (a > b && a > c && (a * a == b * b + c * c))
        printf("Right Triangle");
    else if (b > c && b > a && (b * b == a * a + c * c))
        printf("Right Triangle");
    else if (c > a && c > b && (c * c == a * a + b * b))
        printf("Right Triangle");
    else
        printf("Non-Right Triangle");
    
    return 0;
}