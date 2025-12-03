#include <stdio.h>
int main (void) {
    char str[128];
    int age;
    char gender[10];
    scanf("%s %d %s", str, &age, gender);
    printf("Name:%s\nAge:%d\nGender:%s", str, age, gender);
    return 0;
}