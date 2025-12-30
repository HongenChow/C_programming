#include <stdio.h>
int main (void) {
    int year;
    scanf("%d", &year);

    switch ((year - 3) % 10) {
        case 0: printf("癸"); break;
        case 1: printf("甲"); break;
        case 2: printf("乙"); break;
        case 3: printf("丙"); break;
        case 4: printf("丁"); break;
        case 5: printf("戊"); break;
        case 6: printf("己"); break;
        case 7: printf("庚"); break;
        case 8: printf("辛"); break;
        case 9: printf("壬"); break;
    }
    
    switch((year - 3) % 12) {
        case 0: printf("亥\n豬"); break;
        case 1: printf("子\n鼠"); break;
        case 2: printf("丑\n牛"); break;
        case 3: printf("寅\n虎"); break;
        case 4: printf("卯\n兔"); break;
        case 5: printf("辰\n龍"); break;
        case 6: printf("巳\n蛇"); break;
        case 7: printf("午\n馬"); break;
        case 8: printf("未\n羊"); break;
        case 9: printf("申\n猴"); break;
        case 10: printf("酉\n雞"); break;
        case 11: printf("戌\n狗"); break;
    }

    return 0;
}