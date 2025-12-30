#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int first = 0, second = 0, third = 0;
    for (int i = 0; i < N; i++) {
        int input;
        scanf("%d", &input);
        if (input > first) {
            third = second;
            second = first;
            first = input;
        }
        else if (input < first && input > second) {
            third = second;
            second = input;
        }
        else if (input < first && input < second && input > third)
            third = input;
    }

    int seven = 1, result = 0, ten = 1;
    while ((seven * 7) <= 7) { 
        seven *= 7;
        ten *= 10;
    }
    while (first != 0) {
        int value = first / seven;
        result += value * ten;
        first -= value * seven;
        seven /= 7;
        ten /= 10;
    }

    seven = 1, ten = 1;
    while ((seven * 7) <= 7) {
        seven *= 7;
        ten *= 10;
    }
    while (third != 0) {
        int value = third / seven;
        result += value * ten;
        third -= value * seven;
        seven /= 7;
        ten /= 10;
    }

    printf("%d", result);
    return 0;
}