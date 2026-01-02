#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char type[50][10];
char type_name[50][50];
int count;

int compare(const void *a, const void *b) {
    int i = *(const int *)a;
    int j = *(const int *)b;
    return strcmp(type[i], type[j]);
}
int main (void) {
    strcpy(type[0], "B");
    strcpy(type[1], "H");
    strcpy(type[2], "T");

    strcpy(type_name[0], "Backpack");
    strcpy(type_name[1], "Hoodie");
    strcpy(type_name[2], "Top");

    count = 3;
    int input;
    while (1) {
        if (scanf("%d", &input)) {
            if (input == -1)
                return 0;

            else if (input == -2) {
                int idx[50];
                for (int i = 0; i < count; i++)
                    idx[i] = i;
                qsort(idx, count, sizeof(int), compare);
                printf("keys: [");
                for (int i = 0; i < count; i++) {
                    if (i != count - 1)
                    printf("'%s', ", type[idx[i]]);    
                    else
                    printf("'%s'", type[idx[i]]);
                }
                printf("]\n");
                printf("values: [");
                for (int i = 0; i < count; i++) {
                    if (i != count - 1)
                    printf("'%s', ", type_name[idx[i]]);    
                    else 
                    printf("'%s'", type_name[idx[i]]);
                }
                printf("]\n");
            }
            
            else if (input == -3) {
                bool exist = false;
                char input_type_name_case3[10];
                scanf("%s", input_type_name_case3);
                for (int i = 0; i < count; i++)
                    if (strcmp(input_type_name_case3, type[i]) == 0) {
                        for (int j = i; j < count - 1; j++) {
                            strcpy(type[j], type[j+1]);
                            strcpy(type_name[j], type_name[j+1]);
                        }
                        count--;
                        exist = true;
                    }
                if (exist == false) 
                    printf("key %s does not exist, cannot delete.\n", input_type_name_case3);
            }
            continue;
        }
        char input_type[10];
        scanf("%s", input_type);
        bool exist = false;
        for (int i = 0; i < count; i++)
            if (strcmp(input_type, type[i]) == 0) {
                printf("%s\n", type_name[i]);
                exist = true;
            }
        if (!exist) {
            printf("%s does not exist. Enter a new product category:\n", input_type);
            strcpy(type[count], input_type);
            char input_type_name[50];
            scanf(" %[^\n]", input_type_name);
            strcpy(type_name[count], input_type_name);
            count++; 
        }
    }
    return 0;
}