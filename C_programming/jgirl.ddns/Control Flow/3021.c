#include <stdio.h>
int main (void) {
    int score;
    scanf("%d", &score);

    if (score >= 90 && score <= 100)
        printf("4.3\nA+");
    else if (score >= 85 && score <= 89)
        printf("4.0\nA");
    else if (score >= 80 && score <= 84)
        printf("3.7\nA-");
    else if (score >= 77 && score <= 79)
        printf("3.3\nB+");
    else if (score >= 73 && score <= 76)
        printf("3.0\nB");
    else if (score >= 70 && score <= 72)
        printf("2.7\nB-");
    else if (score >= 67 && score <= 69)
        printf("2.3\nC+");
    else if (score >= 63 && score <= 66)
        printf("2.0\nC");
    else if (score >= 60 && score <= 62)
        printf("1.7\nC-");
    else
        printf("0\nF");
    return 0;
}