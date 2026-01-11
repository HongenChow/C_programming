#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int *arr[3];
    arr[0] = (int *) malloc (sizeof(int) * 1);
    arr[1] = (int *) malloc (sizeof(int) * 2);
    arr[2] = (int *) malloc (sizeof(int) * 3);

    for (int i = 0; i < 3; i++) 
        for (int j = 0; j <= i; j++) {
            scanf("%d", &arr[i][j]);
    }   

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
        free(arr[i]);
    return 0;
}