#include <stdio.h>
#include <stdlib.h>
#include "score.h"
int number;
int main (void) {
    int N;
    scanf("%d", &N);

    int *p = malloc(sizeof(int) * N);
    inputAry(N, p);
    double average = Avg(N, p);
    int Max = MaxScore(N, p);

    printf("avg = %.2f\n", average);
    printf("highest:\n%d: %d", number, Max);
    free(p);
    return 0;

}

void inputAry(int n, int *P) {
    for (int i = 0; i < n; i++)
        scanf("%d", &P[i]);
    return;
}

double Avg(int n, int *P) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += P[i];
    return ((double) sum / n);
}

int MaxScore (int n, int *P) {
    int max = 0;
    for (int i = 0; i < n; i++)
        if (P[i] > max) {
            max = P[i];
            number = i + 1;
        }
    return max;
}
    