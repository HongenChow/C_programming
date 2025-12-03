#include <stdio.h>
#include <math.h>
int main (void) {
    float Ax, Ay, Bx, By, Cx, Cy;
    scanf("%f%f%f%f%f%f", &Ax, &Ay, &Bx, &By, &Cx, &Cy);

    float length_a = sqrt((Bx - Cx) * (Bx - Cx) + (By - Cy) * (By - Cy));
    float length_b = sqrt((Ax - Cx) * (Ax - Cx) + (Ay - Cy) * (Ay - Cy));
    float length_c = sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay));

    float s = (length_a + length_b + length_c) / 2;
    float temp = (s * (s - length_a) * (s - length_b) * (s - length_c));
    if (temp < 0)
    temp = 0;

    float area = sqrt(temp);
    printf("%.2f", area);
    return 0;
}