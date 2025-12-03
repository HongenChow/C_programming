#include <stdio.h>
int main (void) {
    int N, M;
    scanf("%d%d", &N, &M);

    int rabbit, chicken;
    rabbit = M / 2 - N;
    chicken = N - rabbit;

    if (M % 2 || rabbit < 0 || chicken < 0)
        printf("NO\n");
    else 
        printf("YES\n%d %d\n", chicken, rabbit);
    
    return 0;
}