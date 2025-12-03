#include <stdio.h>
int main (void) {
    int number1, number2, number3;
    scanf("%d%d%d", &number1, &number2, &number3);

    int sum = number1 + number2 + number3;
    float avg = (float) sum / 3;
    int mul = number1 * number2 * number3;
    int min = number1, max = number1;

    if (number2 < min) 
        min = number2;
    if (number3 < min)
        min = number3;

    if (number2 > max)
        max = number2;
    if (number3 > max)
        max = number3;

    printf("sum is %d\n", sum);
    printf("average is %.2f\n", avg);
    printf("product is %d\n", mul);
    printf("smallest is %d\n", min);
    printf("largest is %d\n", max);
    return 0;

}