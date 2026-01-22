#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void translate(int number) {
    int quotient = number / 26;
    int value = number % 26;
    if (number % 26 == 0)
        quotient--;
    for (int i = 0; i <= quotient; i++) {
        switch(value) {
            case 0: printf("z"); break;
            case 1: printf("a"); break;
            case 2: printf("b"); break;
            case 3: printf("c"); break;
            case 4: printf("d"); break;
            case 5: printf("e"); break;
            case 6: printf("f"); break;
            case 7: printf("g"); break;
            case 8: printf("h"); break;
            case 9: printf("i"); break;
            case 10: printf("j"); break;
            case 11: printf("k"); break;
            case 12: printf("l"); break;
            case 13: printf("m"); break;
            case 14: printf("n"); break;
            case 15: printf("o"); break;
            case 16: printf("p"); break;
            case 17: printf("q"); break;
            case 18: printf("r"); break;
            case 19: printf("s"); break;
            case 20: printf("t"); break;
            case 21: printf("u"); break;
            case 22: printf("v"); break;
            case 23: printf("w"); break;
            case 24: printf("x"); break;
            case 25: printf("y"); break;
        }
    }
    return;
}
int main (void) {
    char string[1024];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    char *p = string;
    while (1) {
        char *find = strchr(p, '-');
        if (find) {
            *find = '\0';
        }

        int number = atoi(p);
        translate(number);
        if (!find) break;
        p = find + 1;
    }
    return 0;
}