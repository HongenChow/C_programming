#include <stdio.h>
#include <stdlib.h>
int compare (const void *a, const void *b) {
    int x = *(const char *)a;
    int y = *(const char *)b;
    return (x - y);
}
int main (void) {
    char Not[10], Acute[10], Obtuse[10], Right[10];
    int count_Not = 0, count_Acute = 0, count_Obtuse = 0, count_Right = 0;
    while (1) {
        int input;
        scanf("%d", &input);
        if (input == -1) break;

        char input_char;
        int a, b, c;
        scanf("%c%d%d%d", &input_char, &a, &b, &c);

        int large, mid, small;
        if (a > b && a > c) {
            large = a;
            if (b > c) {
                mid = b;
                small = c;
            }
            else {
                mid = c;
                small = b;
            }
        }
        else if (b > a && b > c) {
            large = b;
            if (a > c) {
                mid = a;
                small = c;
            }
            else {
                mid = c;
                small = a;
            }
        }
        else if (c > a && c > b) {
            large = c;
            if (a > b) {
                mid = a;
                small = b;
            }
            else {
                mid = b;
                small = a;
            }
        }
        else { large = a; mid = b; small = c;}
        
        if (mid + small > large) {
            if (large * large == (mid * mid + small * small)) 
                Right[count_Right++] = input_char;
            
            else if (large * large < (mid * mid + small * small)) 
                Acute[count_Acute++] = input_char;
        
            else if (large * large > (mid * mid + small * small)) 
                Obtuse[count_Obtuse++] = input_char;
        }
        else 
            Not[count_Not++] = input_char;
    }

    qsort(Not, count_Not, sizeof(char), compare);
    qsort(Acute, count_Acute, sizeof(char), compare);
    qsort(Obtuse, count_Obtuse, sizeof(char), compare);
    qsort(Right, count_Right, sizeof(char), compare);

    if (count_Not != 0) {
        printf("Not Triangle: ");
        for (int i = 0; i < count_Not; i++) {
            if (i != count_Not - 1)
                printf("%c,", Not[i]);
            else
                printf("%c\n", Not[i]);
        }
    } else
        printf("Not Triangle: None\n");

    if (count_Acute != 0) {
        printf("Acute Angle: ");
        for (int i = 0; i < count_Acute; i++) {
            if (i != count_Acute - 1)
                printf("%c,", Acute[i]);
            else
                printf("%c\n", Acute[i]);
        }
    } else
        printf("Acute Angle: None\n");

    if (count_Obtuse != 0) {
        printf("Obtuse Angle: ");
        for (int i = 0; i < count_Obtuse; i++) {
            if (i != count_Obtuse - 1)
                printf("%c,", Obtuse[i]);
            else
                printf("%c\n", Obtuse[i]);
        }
    } else
        printf("Obtuse Angle: None\n");

    if (count_Right != 0) {
        printf("Right Angle: ");
        for (int i = 0; i < count_Right; i++) {
            if (i != count_Right - 1)
                printf("%c,", Right[i]);
            else
                printf("%c\n", Right[i]);
        }
    } else
        printf("Right Angle: None\n");

    return 0;
}