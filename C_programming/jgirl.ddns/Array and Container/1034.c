#include <stdio.h>
int main (void) {
    int number[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
        printf("%d\t", number[i]);
        for (int j = 0; j < number[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}