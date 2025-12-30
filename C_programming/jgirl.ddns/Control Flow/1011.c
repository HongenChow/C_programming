#include <stdio.h>
int main (void) {
    int state, grade;
    scanf("%d%d", &state, &grade);

    int state_grade_pass = (state == 1)? 60:70;
    if (grade >= state_grade_pass)
        printf("pass");
    else
        printf("fail");
    return 0;
}