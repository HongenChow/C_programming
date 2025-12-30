#include <stdio.h>
#include <stdbool.h>
int main (void) {
    int N, M;
    scanf("%d%d", &N, &M);

    bool first = false;
    for (int i = N; i <= M; i++) {
        int count = 0, temp = i;
        while (temp != 0) {
            count++;
            temp /= 10;
        }        
        
        int sum = 0;
        temp = i;
        while (temp != 0) {
            int value = 1;
            int num = temp % 10;
            for (int j = 1; j <= count; j++)
                value *= num;
            sum += value;
            temp /= 10;
        }

        if (sum == i && !first) {
            printf("%d", i);
            first = true;
        }
        else if (sum == i)
            printf(" & %d", i);
    }

    if (!first)
        printf("none");
    return 0;
}