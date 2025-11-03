// Check if two strings are anagrams of each other

#include <stdio.h>
#include <string.h>
int main(void) {
    char s1[100], s2[100];
    int freq1[26]={0}, freq2[26]={0}, i, flag=1;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(strlen(s1)!=strlen(s2)){ printf("Not anagrams"); return 0; }

    for(i=0;s1[i]!='\0';i++){
        if(s1[i]>='a'&&s1[i]<='z') freq1[s1[i]-'a']++;
        if(s1[i]>='A'&&s1[i]<='Z') freq1[s1[i]-'A']++;
    }
    for(i=0;s2[i]!='\0';i++){
        if(s2[i]>='a'&&s2[i]<='z') freq2[s2[i]-'a']++;
        if(s2[i]>='A'&&s2[i]<='Z') freq2[s2[i]-'A']++;
    }

    for(i=0;i<26;i++)
        if(freq1[i]!=freq2[i]) flag=0;
    if(flag) printf("Anagrams");
    else printf("Not anagrams");
    return 0;
}
