#include <stdio.h>
int main (void) {
    int score;
    scanf("%d", &score);

    if (score >= 95)
        printf("2000 dollars");
    else if (score >= 90 && score <= 94)
        printf("1000 dollars");
    else if (score >= 80 && score <= 89)
        printf("500 dollars");
    else 
        printf("0 dollars");
    
    return 0; 
}