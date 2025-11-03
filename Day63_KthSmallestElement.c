// Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output


#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    int x=*(const int*)a, y=*(const int*)b;
    return (x>y) - (x<y);
}

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    int *a = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    qsort(a,n,sizeof(int),cmp);
    if (k>=1 && k<=n) printf("%d", a[k-1]);
    free(a);
    return 0;
}
