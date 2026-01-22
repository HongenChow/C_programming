#include "survey.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_avg(char s[]){
    char filename[128];
    strcpy(filename, s);
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) return;

    int input, k = 0;
    long long total = 0;
    while(fscanf(fp, "%d", &input) == 1){
        total += input;
        k++;
    }

    fclose(fp);
    if (k == 0) {
        printf("0.00\n");
        return;
    }
    double avg = (double) total / k;
    printf("%.2f", avg);
}