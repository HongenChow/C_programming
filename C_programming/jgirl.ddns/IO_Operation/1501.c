#include <stdio.h>
int main (void) {
    int bond;
    scanf("%d", &bond);

    if (bond % 7 == 0) {
        printf("YES\n");
        return 0;
    }
    
    while (bond != 0) {
        if (bond % 10 == 7) {
            printf("YES\n");
            return 0;
        }
        bond /= 10;
    }
    
    printf("NO\n");
    return 0;
}