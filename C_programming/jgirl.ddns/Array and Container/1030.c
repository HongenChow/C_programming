#include <stdio.h>
int main (void) {
    int number[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]); 
        printf("%d\n", number[i]);
    }
    return 0;
}