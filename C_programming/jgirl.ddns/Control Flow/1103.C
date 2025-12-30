#include <stdio.h>
int main (void) {
    int n;
    scanf("%d", &n);

    if (!(n >= 1 && n <= 99999)) {
        printf("out of range");
        return 0;
    }

    int temp = 10000;
    for (int i = 1; i <= 5; i++) {
        int value = n / temp % 10;
        temp /= 10;
        if (value == 0)
            continue; 
        switch(value) {
            case 1: printf("壹"); break;
            case 2: printf("貳"); break;
            case 3: printf("參"); break;
            case 4: printf("肆"); break;
            case 5: printf("伍"); break;
            case 6: printf("陸"); break;
            case 7: printf("柒"); break;
            case 8: printf("捌"); break;
            case 9: printf("玖"); break;
        }
        switch (temp * 10) {
            case 10000: printf("萬"); break;
            case 1000: printf("仟"); break;
            case 100: printf("佰"); break;
            case 10: printf("拾"); break;
        }
    }
    printf("元整");
    return 0;
}