#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 6; i++) 
        if (i != 4)
        printf("floor %d\n", i);
    

    return 0;
}