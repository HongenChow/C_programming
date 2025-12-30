#include <stdio.h>
int main (void) {
    char c;
    while(1) {
        scanf(" %c", &c);
        if (c == 'q')
            return 0;
        printf("%c\n", c);
    }
}