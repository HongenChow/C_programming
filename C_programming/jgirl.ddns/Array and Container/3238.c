#include <stdio.h>
#define INF 1000000000
int main (void) {
    int N;
    scanf("%d", &N);

    long long height[N];
    for (int i = 0; i < N; i++)
        scanf("%lld", &height[i]);
    
    int p[N];    
    for (int i = 0; i < N; i++)
        scanf("%d", &p[i]);

    long long best_w = INF;
    int best_k = -1;
    for (int start = 0; start < N; start++) {
        int visited[N];
        for (int i = 0; i < N; i++) visited[i] = 0;
        int step = 0;
        int cur = start;
        long long sum = 0;
        while (!visited[cur] && step < N) {
            visited[cur] = 1;
            int next = (cur + p[cur]) % N;
            if (height[next] > height[cur])
                sum += (height[next] - height[cur]);
            cur = next;
            step++;

            int prev = (start - 1 + N) % N;
            if (prev == cur) {
                if (sum < best_w || (sum == best_w && start < best_k)) {
                    best_w = sum;
                    best_k = start;
                }
                break;
            }
        }
    }

    if (best_k == -1) 
        printf("%d\ninf\n", best_k);
    else 
        printf("%d\n%lld", best_k, best_w);

    return 0;
}