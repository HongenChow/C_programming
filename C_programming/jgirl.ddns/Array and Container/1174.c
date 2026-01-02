#include <stdio.h>
int main (void) {
    int a[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            scanf("%d", &a[i][j]);
    int b[3][3];
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    int result[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) 
                result[i][j] += a[i][k] * b[k][j];
            printf("%-4d", result[i][j]);
        }
        printf("\n");
    }
            
    
    return 0;
}