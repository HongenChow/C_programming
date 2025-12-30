#include <stdio.h>
#include <string.h>
int main (void) {
    char year[10];
    scanf("%s", year);

    int input;
    while (1) {
        scanf("%d", &input);
        if (input == -1)
            return 0;
        int index;
        if (strcmp(year, "AD") == 0)
            index = input % 12;
        else if (strcmp(year, "Minguo") == 0)
            index = (input + 1911) % 12;
        switch(index) {
            case 0: { printf("猴\n"); break;}
            case 1: { printf("雞\n"); break;}
            case 2: { printf("狗\n"); break;}
            case 3: { printf("豬\n"); break;}
            case 4: { printf("鼠\n"); break;}
            case 5: { printf("牛\n"); break;}
            case 6: { printf("虎\n"); break;}
            case 7: { printf("兔\n"); break;}
            case 8: { printf("龍\n"); break;}
            case 9: { printf("蛇\n"); break;}
            case 10: { printf("馬\n"); break;}
            case 11: { printf("羊\n"); break;}    
        }
    }
    return 0;
}