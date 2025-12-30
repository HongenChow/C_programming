#include <stdio.h>
int main (void) {
    int value, count = 0;
    char c;
    while (1) {
        if (scanf("%d", &value) != 1) {
        scanf(" %c", &c); 
        if (c == 'q')
            break; 
        }
        if (value == 1) {
            int nine;
            if (scanf("%d", &nine) == 1) {
                while (nine == 1)
                    scanf("%d", &nine);
                if (nine == 9)
                    count++;
            }
        }     
    }

    printf("%d", count);
    return 0;
}