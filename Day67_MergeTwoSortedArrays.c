// Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array


#include <stdio.h>

int main(void){
    int m,n; if (scanf("%d",&m)!=1) return 0;
    int a[m]; for (int i=0;i<m;i++) scanf("%d",&a[i]);
    scanf("%d",&n);
    int b[n]; for (int i=0;i<n;i++) scanf("%d",&b[i]);

    int i=0,j=0;
    while (i<m && j<n){
        if (a[i] <= b[j]) { printf("%d ", a[i++]); }
        else { printf("%d ", b[j++]); }
    }
    while (i<m) printf("%d ", a[i++]);
    while (j<n) printf("%d ", b[j++]);
    return 0;
}
