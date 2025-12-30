#include <stdio.h>
#include <stdbool.h>
int main (void) {
    int money;
    scanf("%d", &money);

    int value = 1000000;
    bool notone = false;
    for (int i = 1; i <= 3; i++) {
        int temp = money / value % 1000;
        int hundred = temp / 100;
        int ten = temp / 10 % 10;
        int one = temp % 10;
        if (hundred == 0 && ten == 0 && one == 0) {
            value /= 1000;
            continue;
        }
        switch (hundred) {
            case 1: {
            printf("one hundred "); break; }
            case 2: {
            printf("two hundred "); break; }
            case 3: {
            printf("three hundred "); break; }
            case 4: {
            printf("four hundred "); break; }
            case 5: {
            printf("five hundred "); break; }
            case 6: {
            printf("six hundred "); break; }
            case 7: {
            printf("seven hundred "); break; }
            case 8: {
            printf("eight hundred "); break; }
            case 9: {
            printf("nine hundred "); break; }
        }

        if (ten == 1 && one != 0) {
            switch (one) {
            case 1: {
            printf("eleven "); break;}
            case 2: {
            printf("twelve "); break;}
            case 3: {
            printf("thirteen "); break;}
            case 4: {
            printf("fourteen "); break;}
            case 5: {
            printf("fifteen "); break;}
            case 6: {
            printf("sixteen "); break;}
            case 7: {
            printf("seventeen "); break;}
            case 8: {
            printf("eighteen "); break;}
            case 9: {
            printf("nineteen "); break;}
            }
        }
        else {
            switch(ten) {
            case 1: {
            printf("ten "); break;}
            case 2: {
            printf("twenty "); break;}
            case 3: {
            printf("thirty "); break;}
            case 4: {
            printf("forty "); break;}
            case 5: {
            printf("fifty "); break;}
            case 6: {
            printf("sixty "); break;}
            case 7: {
            printf("seventy "); break;}
            case 8: {
            printf("eighty "); break;}
            case 9: {
            printf("ninety "); break;}
        }

        switch(one) {
            case 1: {
            printf("one "); break;}
            case 2: {
            printf("two "); break;}
            case 3: {
            printf("three "); break;}
            case 4: {
            printf("four "); break;}
            case 5: {
            printf("five "); break;}
            case 6: {
            printf("six "); break;}
            case 7: {
            printf("seven "); break;}
            case 8: {
            printf("eight "); break;}
            case 9: {
            printf("nine "); break;}
        }
        }
        switch (i) {
            case 1: {
            printf("million "); notone = true; break;}
            case 2: {
            printf("thousand "); notone = true; break;}
            case 3: {
            if (notone == false && hundred == 0 && ten == 0 && one == 1) {
            printf("dollar"); break;}
            else {
            printf("dollars"); break;}
            }
        }
        value /= 1000;
    }
    return 0;
}