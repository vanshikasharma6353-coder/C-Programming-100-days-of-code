// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output


#include <stdio.h>

int main(void) {
    int n; if (scanf("%d", &n)!=1) return 0;
    int a[n]; for (int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);

    int q[n], front=0, back=0; // store indices of negatives

    for (int i=0;i<n;i++) {
        if (a[i] < 0) q[back++] = i;
        if (i >= k-1) {
            while (front < back && q[front] <= i - k) front++;
            if (front < back) printf("%d", a[q[front]]);
            else printf("0");
            if (i != n-1) printf(" ");
        }
    }
    return 0;
}

