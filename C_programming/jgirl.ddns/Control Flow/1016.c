#include <stdio.h>
int main (void) {
    char c;
    while (1) {
        scanf(" %c", &c);
        if (c != 'y')
            return 0;
        printf("run\n");
    }
}