#include <stdio.h>
int main (void) {
    int height, weight;
    scanf("%d%d", &height, &weight);

    float BMI = weight / ((float) height / 100 * (float) height / 100);
    if (BMI < 18.5)
        printf("%.2f\nUnderweight", BMI);
    else if (BMI >= 18.5 && BMI < 24)
        printf("%.2f\nNormal", BMI);
    else if (BMI >= 24 && BMI < 27)
        printf("%.2f\nOverweight", BMI);
    else if (BMI >= 27 && BMI < 30)
        printf("%.2f\nObese Class I", BMI);
    else if (BMI >= 30 && BMI < 35)
        printf("%.2f\nObese Class II", BMI);
    else if (BMI >= 35)
        printf("%.2f\nObese Class III", BMI);

    return 0;
}