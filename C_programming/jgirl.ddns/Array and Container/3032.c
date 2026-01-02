#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int compare (const void *a, const void *b) {
    return (*(const int *)a - *(const int *)b);
}
int main (void) {
    int number[10], count = 0;
    bool notice = false;
    while (1) {
        int input;
        if (scanf("%d", &input)) {
            number[count] = input;
            count++;
            continue;
        }

        char input_char[10];
        scanf("%s", input_char);
        if (strcmp(input_char, "q") == 0)
            break;
        else
            notice = true;
    }

    if (notice == true)
        printf("Please Enter Numbers Only\n");

    printf("[");
    for (int i = 0; i < count; i++) {
        if (i != count - 1)    
            printf("%d, ", number[i]);
        else 
            printf("%d]\n", number[i]);
    }
    
    int new_number[10];
    for (int i = 0; i < count; i++)
        new_number[i] = number[i];
    qsort(new_number, count, sizeof(int), compare);
    printf("[");
    for (int i = 0; i < count; i++) {
        if (i != count - 1)
            printf("%d, ", new_number[i]);
        else
            printf("%d]\n", new_number[i]);
    }
    printf("[");
    for (int i = count - 1; i >= 0; i--) {
        if (i != 0)
            printf("%d, ", new_number[i]);
        else
            printf("%d]\n", new_number[i]);
    }

    printf("[");
    for (int i = 0; i < count; i++) {
        if (i != count - 1)    
            printf("%d, ", number[i]);
        else 
            printf("%d]\n", number[i]);
    }
    return 0;
}