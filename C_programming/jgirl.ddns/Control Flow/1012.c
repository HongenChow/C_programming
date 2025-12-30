#include <stdio.h>
int main (void) {
    int role;
    scanf("%d", &role);

    if (role < 1 || role > 2) {
        printf("role error");
        return 0;
    }
    
    int score;
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("score error");
        return 0;
    }

    int score_pass = (role == 1)? 60:70;
    if (score >= score_pass)
        printf("pass");
    else 
        printf("fail");
    return 0;
}