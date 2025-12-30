#include <stdio.h>
#include <stdbool.h>
int main (void) {
    int N;
    scanf("%d", &N);

    int number[N], pos[N];
    for (int i = 0; i < N; i++) 
        scanf("%d", &number[i]);

    int temp = 0, result, A, B;
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++) {
            bool max_between = false;
            int height = (number[i] > number[j])? number[j]: number[i];
            int area = height * (j - i);
            for (int a = i + 1; a < j; a++)
                    if (number[a] >= height) {
                        max_between = true;
                        break;
                    }
    
            if (max_between)
                    continue;

            if (height > temp) {
                temp = height;
                A = i + 1;
                B = j + 1;
                result = area;
            }   
            else if (height == temp) 
                if (area > result) {
                    A = i + 1;
                    B = j + 1;
                    result = area;
                }
        }

    printf("%d %d\n%d", A, B, result);
    return 0;
}