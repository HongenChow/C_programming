#include <stdio.h>
int main (void) {
    float number1, number2;
    scanf("%f%f", &number1, &number2);
    printf("%.2f + %.2f = %.2f\n", number1, number2, number1 + number2);
    printf("%.2f - %.2f = %.2f\n", number1, number2, number1 - number2);
    printf("%.2f * %.2f = %.2f\n", number1, number2, number1 * number2);
    printf("%.2f / %.2f = %.2f\n", number1, number2, number1 / number2);
    return 0;
}