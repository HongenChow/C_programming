#include <stdio.h>
int main (void) {
    int max1 = 0, max2 = 0, max3 = 0;
    while (1) { 
        int input;
        if (scanf("%d", &input) == 1 && input == -1)
            break;
        if (input > max1) {
            max1 = input;
            max2 = max1;
            max3 = max2;
        } else if (input > max2) {
            max2 = input;
            max3 = max2;
        } else if (input > max3) {
            max3 = input;
        }
    }
        
    int seven = 1, count = 0, result = 0;
    while (max1 >= seven * 7) {
        seven *= 7;
        count++;
    }
    while (max1) {
        int ten = 1;
        for (int i = 0; i < count; i++)
            ten *= 10;
        count--;
        int ans = max1 / seven % 7;
        result += ans * ten;
        max1 -= ans * seven;
        seven /= 7;
    }
    
    seven = 1, count = 0;
    while (max3 >= seven * 7) {
        seven *= 7;
        count++;
    }
    while (max3) {
        int ten = 1;
        for (int i = 0; i < count; i++)
            ten *= 10;
        count--;
        int ans = max3 / seven % 7;
        result += ans * ten;
        max3 -= ans * seven;
        seven /= 7;
    }
    printf("%d", result);
    return 0;
}