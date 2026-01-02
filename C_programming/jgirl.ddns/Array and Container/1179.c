#include <stdio.h>
int main (void) {
    int h, w;
    scanf("%d%d", &h, &w);

    int number[h * w];
    for (int i = 0; i < h * w; i++)
        scanf("%d", &number[i]);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("\t%d", number[i * w + j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            printf("\t%d", number[j * w + i]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i = w - 1; i >= 0; i--) {
        for (int j = h - 1; j >= 0; j--) {
            printf("\t%d", number[j * w + i]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            printf("\t%d", number[i * w + j]);       
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < w; i++) {
        for (int j = h - 1; j >= 0; j--) {
            printf("\t%d", number[j * w + i]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = w - 1; i >= 0; i--) {
        for (int j = 0; j < h; j++) {
            printf("\t%d", number[j * w + i]);
        }
        printf("\n");
    }

    return 0;
}