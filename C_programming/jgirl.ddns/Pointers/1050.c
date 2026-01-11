#include <stdio.h>
int main (void) {
    int A[5];
    for (int i = 0; i < 5; i++) 
        scanf("%d", &A[i]);
    
    int *ptr = A;
    int large = 0, pos = 0;
    for (int i = 0; i < 5; i++)
        if (*(ptr + i) > large) {
            large = *(ptr + i);
            pos = i + 1;
        }
    printf("%d: %d", pos, large);
    return 0;
}