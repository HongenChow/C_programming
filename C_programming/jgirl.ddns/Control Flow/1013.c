#include <stdio.h>
int main (void) {
    float x, y;
    char c;
    scanf("%f%f %c", &x, &y, &c);

    switch (c) {
        case '+':
        printf("%.2f + %.2f = %.2f", x, y, x + y);
        break;
        case '-':
        printf("%.2f - %.2f = %.2f", x, y, x - y);
        break;
        case '*':
        printf("%.2f * %.2f = %.2f", x, y, x * y);
        break;
        case '/':
        printf("%.2f / %.2f = %.2f", x, y, x / y);
        break;
    }
    return 0;
}