#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct information {
    char name[10];
    int id;
    int income;
    int code_length;
    char *code;
} Information;

typedef struct input_i {
    int id;
    int code_length;
    char *code;
} input_I;

void readinput (Information *number) {
    char tmp[1000000];
    scanf("%9s", number -> name);
    scanf("%d", &(number -> id));
    scanf("%d", &(number -> income));
    scanf("%d", &(number -> code_length));
    scanf("%999999s", tmp);

    number -> code = (char *) malloc (number -> code_length + 1);
    memcpy(number -> code, tmp, number -> code_length + 1);
    number -> code[number -> code_length] = '\0';
}

void readinput_I (input_I *number_I) {
    char tmp[1000000];
    scanf("%d %d %s", &(number_I -> id), &(number_I -> code_length), tmp);

    number_I -> code = (char *) malloc (number_I -> code_length + 1);
    memcpy(number_I -> code, tmp, number_I -> code_length + 1);
    number_I -> code[number_I -> code_length] = '\0';
}

void process_I (int n, input_I I, Information *N) {
    for (int j = 0; j < n; j++) {
        if (N[j].id == I.id && strcmp(N[j].code, I.code) == 0) {
            printf("True\n");
            return;
        }
    }
    printf("False\n");
    return;
}

void process_G(int n, int G, Information *N) {
    for (int j = 0; j < n; j++) {
        if (N[j].id == G) {
            printf("%s %d\n", N[j].name, N[j].income);
            return;
        }
    }
}

int main (void) {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N, I, G;
        scanf("%d%d%d", &N, &I, &G);
        
        Information *number = malloc(sizeof(Information) * N);
        input_I *number_I = malloc(sizeof(input_I) * I);
        int *input_G = malloc(sizeof(int) * G);

        for (int i = 0; i < N; i++) readinput(&number[i]);
        for (int i = 0; i < I; i++) readinput_I(&number_I[i]);
        for (int i = 0; i < G; i++) scanf("%d", &input_G[i]);

        for (int i = 0; i < I; i++) process_I(N, number_I[i], number);
        for (int i = 0; i < G; i++) process_G(N, input_G[i], number);
        
        for (int i = 0; i < N; i++) free(number[i].code);
        for (int i = 0; i < I; i++) free(number_I[i].code);
        free(number);
        free(number_I);
        free(input_G);
    }
    return 0;
}
