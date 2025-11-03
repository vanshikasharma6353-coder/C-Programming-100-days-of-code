// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element


#include <stdio.h>
#include <limits.h>

int main(void) {
    int n; if (scanf("%d",&n)!=1) return 0;
    long long x, cur, best;
    scanf("%lld",&x);
    cur = best = x;
    for (int i=1;i<n;i++) {
        scanf("%lld",&x);
        if (cur + x < x) cur = x; else cur += x;
        if (cur > best) best = cur;
    }
    printf("%lld", best);
    return 0;
}


