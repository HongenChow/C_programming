#include <stdio.h>
#include <stdbool.h>
int main (void) {
    int m;
    scanf("%d", &m);

    int count = 2;
    while (count <= m) {
        bool prime = true;
        for (int i = 2; i * i <= count; i++) {
            if (count % i == 0)
                prime = false;
        }
        if (prime)
            printf("%d is prime\n", count);
        count++;
    }
    return 0;
}