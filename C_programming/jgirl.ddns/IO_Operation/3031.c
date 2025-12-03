#include <stdio.h>
int main (void) {
    int number;
    scanf("%d", &number);
    printf("%d dozen ", number / 12);
    if (number % 12)
    printf("and %d", number % 12);
    return 0;
}