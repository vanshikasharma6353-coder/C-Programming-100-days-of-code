// Find the first repeating lowercase alphabet in a string

#include <stdio.h>
int main(void) {
    char str[100];
    int freq[26] = {0}, i, found = 0;
    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating letter: %c", ch);
                found = 1;
                break;
            }
            freq[ch - 'a']++;
        }
    }
    if (!found) printf("No repeating lowercase letter");
    return 0;
}
