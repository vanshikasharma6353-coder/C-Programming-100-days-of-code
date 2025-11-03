// Reverse each word in a sentence without changing the word order

#include <stdio.h>
#include <string.h>
void reverse(char s[], int start, int end){
    char t;
    while(start<end){
        t=s[start];
        s[start]=s[end];
        s[end]=t;
        start++; end--;
    }
}
int main(void){
    char str[200];
    int i, start=0;
    printf("Enter sentence: ");
    gets(str);
    for(i=0; ;i++){
        if(str[i]==' '||str[i]=='\0'){
            reverse(str,start,i-1);
            start=i+1;
            if(str[i]=='\0') break;
        }
    }
    printf("Reversed words: %s",str);
    return 0;
}
