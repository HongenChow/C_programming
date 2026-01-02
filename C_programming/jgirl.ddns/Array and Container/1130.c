#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int number[N], sum = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &number[i]);
        sum += number[i];
    }

    float avg = (float) sum / N;
    int count = 0;
    for (int i = 0; i < N; i++) 
        if (number[i] > avg)
            count++; 
    printf("%d", count);
    return 0;
}