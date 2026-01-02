#include <stdio.h>
#include <stdlib.h>
int compare (const void *a, const void *b) {
    return (*(const int *)a - *(const int *)b);
}
int main (void) {
    int number[16], count = 0, sum = 0;
    while(1) {
        int input;
        scanf("%d", &input);
        if (input != -1) {
            number[count] = input;
            if (number[count] > 30)
                sum += number[count];
            count++;
            
        }
        else
            break;
    }

    printf("[");
    for (int i = 0; i < count; i++)
        if (i != count - 1)
            printf("%d, ", number[i]);
        else 
            printf("%d]\n", number[i]);

    qsort(number, count, sizeof(int), compare);
    printf("[");
    for (int i = 0; i < count; i++)
        if (i != count - 1)
            printf("%d, ", number[i]);
        else 
            printf("%d]\n", number[i]);
    printf("%d", sum);
    return 0;
}