// Print all sub-strings of a string

#include <stdio.h>
#include <string.h>
int main(void){
    char str[100], sub[100];
    int i,j,k;
    printf("Enter string: ");
    gets(str);
    int n = strlen(str);

    printf("Substrings:\n");
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++)
                printf("%c",str[k]);
            printf("\n");
        }
    }
    return 0;
}
