// Check if a string is a palindrome

#include <stdio.h>
#include <string.h>
int main(void) {
    char str[100];
    int i, j, flag = 1;
    printf("Enter string: ");
    gets(str);
    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
