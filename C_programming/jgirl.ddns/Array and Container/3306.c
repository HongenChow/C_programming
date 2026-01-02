#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int compare (const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;    
}

int main (void) {
    int N;
    scanf("%d", &N);

    char string[1024][1024];
    int number[1024][1024], count[1024] = {0};
    int string_count = 0;
    for (int i = 0; i < N; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            char input_list_type1[1024];
            scanf("%s", input_list_type1);
            strcpy(string[string_count], input_list_type1);
            
            int number_count = 0;
            char line[1024];
            do {
                if (!fgets(line, sizeof(line), stdin)) break;
            } while (line[0] == '\n');


            char *p = strtok(line, " \n");
            while (p) {
                number[string_count][number_count] = atoi(p);
                number_count++;

                p = strtok(NULL, " \n");
            }
            count[string_count] = number_count;
            string_count++;
        }
        
        else if (type == 2) {
            char input_list_type2[1024];
            scanf("%s", input_list_type2);
            bool found = false;
            for (int j = 0; j < string_count; j++) {
                if (strcmp(string[j], input_list_type2) == 0) {
                    found = true;
                    int input_mode;
                    scanf("%d", &input_mode);

                    switch(input_mode) {
                        case 1: {
                            printf("[");
                            for (int k = 0; k < count[j]; k++) {
                                if (k != (count[j] - 1))
                                    printf("%d, ", number[j][k]);
                                else
                                    printf("%d]\n", number[j][k]);
                            }
                            break;
                        }
                        
                        case 2: {
                            int tmp[1024];
                            memcpy(tmp, number[j], count[j] * sizeof(int));
                            qsort(tmp, count[j], sizeof(int), compare);
                            printf("[");
                            for (int k = 0; k < count[j]; k++) {
                                if (k != (count[j] - 1))
                                    printf("%d, ", tmp[k]);
                                else
                                    printf("%d]\n", tmp[k]);
                            }
                            break;
                        }

                        case 3: {
                             int tmp[1024];
                            memcpy(tmp, number[j], count[j] * sizeof(int));
                            qsort(tmp, count[j], sizeof(int), compare);
                            printf("[");
                            for (int k = count[j] - 1; k >= 0; k--) {
                                if (k != 0)
                                    printf("%d, ", tmp[k]);
                                else
                                    printf("%d]\n", tmp[k]);
                            }
                            break;
                        }

                        default: 
                        printf("channel -group 1 mode passive,NASA is so hard\n");
                    }
                    break;
                }
            }
            
            if (!found) {
                    int input_mode_fail;
                    scanf("%d", &input_mode_fail);
                    printf("bad string -999999 social credit\n");
            }
        }    
    }
    return 0;
}