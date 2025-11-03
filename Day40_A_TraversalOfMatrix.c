// Perform diagonal traversal of a matrix

#include <stdio.h>
int main(void){
    int r,c,i,j,s;
    printf("Enter rows and cols: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(s=0;s<r+c-1;s++){
        for(i=0;i<r;i++){
            j=s-i;
            if(j>=0 && j<c)
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

