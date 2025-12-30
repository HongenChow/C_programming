#include <stdio.h>
int main (void) {
    char A;
    scanf("%c", &A);

    int next_step, result = 0, previous_step = 0;
    char B;
    while (1) {
        if (scanf("%d", &next_step) == 1) { 
            if (next_step == previous_step)
                result += 5;
            else if (previous_step < next_step) {
                result += 10 * (next_step - previous_step);
            }      
            else if (previous_step > next_step) {
                result += 6 * (previous_step - next_step);
            }
        
            previous_step = next_step;
        }
        else {
            scanf(" %c", &B);
            if (previous_step != 0)
                result += 6 * previous_step;
            else
                result += 5;    
            break;
        }
    }
    
    printf("%d", result);
    return 0;
}