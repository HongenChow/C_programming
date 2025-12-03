#include <stdio.h>
int main (void) {
    char name_student_2[10];
    scanf("%s", name_student_2);

    printf("姓名\t座號\t分數\n");
    printf("王小明\t20\t40\n");
    printf("%s\t21\t100", name_student_2);
    return 0;
}