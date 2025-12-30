#include <stdio.h>
int main (void) {
    int x = 1;
    float y = 1;
    int input_i;
    float input_f;
    char input_c;

    while (1) {
        if (scanf("%f", &input_f) == 1) {
            if ((int) input_f == input_f) 
                x *= (int) input_f;    
            else
                y *= input_f;
            continue;
        }

        scanf("%c", &input_c);
        if (input_c == 'q')
            break;
    }

    printf("%.2f\n%d\n", y, x);
    if (x > y)
        printf("Float < Int");
    else if (x < y)
        printf("Float > Int");
    else if (x == y)
        printf("Float = Int");
    return 0;
}