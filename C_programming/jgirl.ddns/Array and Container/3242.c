#include <stdio.h>
#include <stdbool.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int plate[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &plate[i]);

    int B[N];
    int count_A = N, count_B = 0;
    for (int count = 0; count < N; count++) {
        bool find = false;
        while (!find) {
            if (count_B != 0 && B[count_B - 1] == plate[count]) {
                count_B--;        
                break;
            }
            else if (count_A == 0) {
                printf("Warning!");
                return 0;
            }
            for (int top = count_A; top >= 1; top--) {
                if (top != plate[count]) {
                    B[count_B++] = top;
                    count_A--;
                }
                else {
                    count_A--;
                    find = true;
                    break;
                }
            }
            
        }
    }

    printf("Good job!");
    return 0;
}