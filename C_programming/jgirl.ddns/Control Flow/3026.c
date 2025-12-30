#include <stdio.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int input;
    int M1 = 0, M2 = 0, M3 = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &input);
        if (input % 2 == 0 && input >= 100)
            M2 += input;
        else if (input % 2 != 0 && input >= 50)
            M1 += input;
        M3 += input;
    }
    printf("%d\n%d\n%d", M1, M2, M3);
    return 0;
}