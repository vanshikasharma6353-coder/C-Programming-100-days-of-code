// Find the longest word in a sentence

#include <stdio.h>
#include <string.h>
int main(void) {
    char str[200], word[50], longest[50];
    int i=0,j=0,max=0;
    printf("Enter sentence: ");
    gets(str);

    for(i=0; ;i++){
        if(str[i]==' '||str[i]=='\0'){
            word[j]='\0';
            if(strlen(word)>max){
                max=strlen(word);
                strcpy(longest,word);
            }
            j=0;
            if(str[i]=='\0') break;
        } else {
            word[j++]=str[i];
        }
    }
    printf("Longest word: %s",longest);
    return 0;
}
