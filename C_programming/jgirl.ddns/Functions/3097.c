#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void MatrixA (int row, int column, int array[512][512]) {
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            if (j != (row - 1))    
                printf("%d ", array[j][i]);
            else 
                printf("%d", array[j][i]);    
        }
        printf("\n");
    }
}
int main (void) {
    int array[512][512], row = 0;
    int column = -1;
    while (1) {
        char input[1024];
        if (!fgets(input, sizeof(input), stdin)) break;
        input[strcspn(input, "\r\n")] = '\0';

        if (strcmp(input, "q") == 0)
            break;
        char *p = input;
        int col = 0;
        while (1) {
            while (*p == ' ') p++;
            if (*p == '\0') break;

            char *find = strchr(p, ' ');
            if (find)
                *find = '\0'; 
            array[row][col++] = atoi(p);
            if (!find)
                break;
            p = find + 1;
        }
        if (column == -1)
            column = col;
        row++;     
    }

    MatrixA(row, column, array);
    return 0;
}

