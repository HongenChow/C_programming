#include "bag.h"
#include <stdio.h>
#include <stdlib.h>
void ans(int n,int k, int *a){
    long long number_of_item = 0, total_weight_of_item = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] <= k) {
            number_of_item++;
            total_weight_of_item += a[i];
        }
    }
    printf("%lld %lld", number_of_item, total_weight_of_item);
}