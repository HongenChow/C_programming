#include <stdio.h>
int main (void) {
    char c;
    do {
        int score;
        scanf("%d", &score);
        if (score >= 60)
            printf("pass\n");
        else
            printf("fail\n");
        scanf(" %c", &c);
    } while(c == 'y');
    return 0;
}