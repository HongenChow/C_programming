#include <stdio.h>
#include <math.h>
int main (void) {
    int A, B;
    double C;
    scanf("%d%d%lf", &A, &B, &C);
    
    int number = 1000;
    double sum, avg, std;
    for (int i = 0; i < 4; i++) {
        int temp_A = (A / number) % 10;
        int temp_B = (B / number) % 10;
        int temp_C = ((int) C / number) % 10;

        sum = temp_A + temp_B + temp_C;
        avg = (double) sum / 3;
        std = sqrt(((temp_A - avg) * (temp_A - avg) + (temp_B - avg) * (temp_B - avg) + (temp_C - avg) * (temp_C - avg)) / 3);
        
        printf("%d %.2f %.2f\n", (int)sum, avg, std);
        number /= 10;
    }

    sum = (double) A + B + C;
    avg = sum / 3;
    std = sqrt(((A - avg) * (A - avg) + (B - avg) * (B - avg) + (C - avg) * (C - avg)) / 3);
        
    printf("%.2f %.2f %.2f\n", sum, avg, std);
    return 0;
}