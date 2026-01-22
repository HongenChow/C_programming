#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void YEAR (int n, char lst[][5]) {
    for (int i = 0; i < n; i++) {
        printf("%s = ", lst[i]);
        int x = atoi(lst[i]);
        int tiangan = (x - 3) % 10;
        int dizhi = (x - 3) % 12;

        switch (tiangan) {
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

        switch (dizhi) {
            case 0: printf("亥"); break;
            case 1: printf("子"); break;
            case 2: printf("丑"); break;
            case 3: printf("寅"); break;
            case 4: printf("卯"); break;
            case 5: printf("辰"); break;
            case 6: printf("巳"); break;
            case 7: printf("午"); break;
            case 8: printf("未"); break;
            case 9: printf("申"); break;
            case 10: printf("酉"); break;
            case 11: printf("戌"); break;
        }
        printf("年\n");
    }
}
int main (void) {
    int n = 0; 
    char lst[1024][5];
    while (1) {
        char input[16];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        if (strcmp(input, "q") == 0)
            break;
        
        strcpy(lst[n++], input);
    }

    YEAR(n, lst);
    return 0;
}