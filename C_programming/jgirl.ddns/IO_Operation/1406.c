#include <stdio.h>
int main (void) {
    int important, now;
    scanf("%d%d", &important, &now);

    int count = 0;
    while (now != important) {
        while (now < important) {
            now += 5;
            count++;
        }

        while (now > important) {
            now -= 2;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}