#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main (void) {
    int count;
    scanf("%d", &count);
 
    char *name[count];
    int *number = malloc(sizeof(int) * count);
    char input[100]; 
    int input_number;
    int name_count = 0;
    for (int i = 0; i < count; i++) {
        scanf("%s", input);
        scanf("%d", &input_number);
        bool exist = false;
        for (int j = 0; j < name_count; j++) 
            if (strcmp(name[j], input) == 0) {
                number[j] += input_number;
                exist = true;
                break;
            }
        if (exist == false) {
            name[name_count] = malloc(sizeof(char) * 100);
            strcpy(name[name_count], input);
            number[name_count] = input_number;
            name_count++;
        }
    }
 
    int max_index = 0;
    for (int i = 1; i < name_count; i++)
        if (number[i] > number[max_index])
            max_index = i;
 
 
    printf("%s %d\n", name[max_index], number[max_index]);
     for (int i = 0; i < name_count; i++)
        free(name[i]);
    free(number);
    return 0;
}